/**
 * @file mongodb_handler.h
 * @version 5.0
 * @authors  Rodriguez Hernández Olman Isaac
 * @brief Contiene todas las funciones que permiten insertar, editar y remover
 * los datos de la base de datos MongoDB
 */
#pragma once
#include <cstdint>
#include <string>

#include "bsoncxx/builder/stream/document.hpp"
#include "bsoncxx/json.hpp"
#include "bsoncxx/oid.hpp"
#include "mongocxx/client.hpp"
#include "mongocxx/database.hpp"
#include "mongocxx/uri.hpp"
#include <mongocxx/stdx.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/model/update_one.hpp>
#include <bsoncxx/builder/stream/helpers.hpp>
#include <bsoncxx/builder/stream/array.hpp>



using bsoncxx::builder::stream::close_array;
using bsoncxx::builder::stream::close_document;
using bsoncxx::builder::stream::document;
using bsoncxx::builder::stream::finalize;
using bsoncxx::builder::stream::open_array;
using bsoncxx::builder::stream::open_document;

namespace learning
{
	/**
	 * @authors Rodríguez Hernández Olman Isaac
	 * @brief variables que contienen los datos para accesar a la base de datos
	 */
	constexpr char kMongoDbUri[] = "mongodb://127.0.0.1:27017";
	constexpr char kDatabaseName[] = "GalleryTEC";
	constexpr char kCollectionName[] = "usuarios";
	class MongoDbHandler
	{
	public:
		/**
	 * @authors Rodriguez Hernández Olman Isaac
	 * @brief Metodo el cual realiza la conexion con la base de datos
	 */
		MongoDbHandler()
			: uri(mongocxx::uri(kMongoDbUri)),
			client(mongocxx::client(uri)),
			db(client[kDatabaseName]) {}
		/**
	 * @authors Rodriguez Hernández Olman Isaac
	 * @brief Permite introducir o insertar un documento (Metadata de la imagen) a la base de datos
	 * @param character_name Nombre de la imagen
	 * @param autor Usuario
	 * @param año_creacion Año de creacion de la imagen
	 * @param tamaño Tamaño de la imagen
	 * @param descripcion Descripcion de la imagen
	 */
		bool AddCharacterToDb(const std::string& character_name,
			const std::string& autor, const int16_t& año_creacion, const std::string& tamaño, const std::string& descripcion) {
			mongocxx::collection collection = db[kCollectionName];
			auto builder = bsoncxx::builder::stream::document{};

			bsoncxx::document::value doc_to_add =
				builder << "Nombre_de_imagen" << character_name
				<< "autor" << autor
				<< "fecha_creacion" << año_creacion
				<< "tamano" << tamaño
				<< "descripcion" << descripcion << bsoncxx::builder::stream::finalize;

			collection.insert_one(doc_to_add.view());

			return true;
		}

		/**
	 * @authors Rodriguez Hernández Olman Isaac
	 * @brief Permite actualizar un documento (Metadata de la imagen) a la base de datos
	 * @param imageid id de la imagen
	 * @param descripcion Descripcion de la imagen
	 */
		bool Updatedate(const std::string& imageid, const std::string& descripcion) {

			mongocxx::collection collection = db[kCollectionName];
			auto builder = bsoncxx::builder::stream::document{};
			bsoncxx::oid document_id(imageid);

			bsoncxx::document::value query_doc =
				builder << "_id" << document_id
				<< bsoncxx::builder::stream::finalize;

			bsoncxx::document::value update_doc =
				builder << "$set" << bsoncxx::builder::stream::open_document
				<< "descripcion" << descripcion
				<< bsoncxx::builder::stream::close_document
				<< bsoncxx::builder::stream::finalize;

			bsoncxx::stdx::optional<mongocxx::result::update> maybe_result =
				collection.update_one(query_doc.view(), update_doc.view());

			return true;

		}

		/**
	 * @authors Rodriguez Hernández Olman Isaac
	 * @brief Permite elimina un documento (Metadata de la imagen) a la base de datos
	 * @param image_id id_imagen
	 */
		bool RemoveImageFromDb(const std::string& image_id) {
			mongocxx::collection collection = db[kCollectionName];
			auto builder = bsoncxx::builder::stream::document{};
			//bsoncxx::oid document_id(image_id);

			bsoncxx::document::value query_doc =
				builder << "Nombre_de_imagen" << image_id//document_id
				<< bsoncxx::builder::stream::finalize;

			bsoncxx::stdx::optional<mongocxx::result::delete_result> maybe_result =
				collection.delete_one(query_doc.view());
			return true;
		}

		/**
	 * @authors Rodriguez Hernández Olman Isaac
	 * @brief Busca todos los documentos de la base de datos
	 */
		std::string GetAllDataFromDb() {
			mongocxx::collection collection = db[kCollectionName];

			std::string prueba;
			auto cursor = collection.find({});
			for (auto doc : cursor) {
				prueba += bsoncxx::to_json(doc);
			}

			return prueba;
		}
	private:
		mongocxx::uri uri;
		mongocxx::client client;
		mongocxx::database db;
	};
}
