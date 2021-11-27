/**
 * @file MetaData.h
 * @version 5.0
 * @authors  Rodriguez Hernández Olman Isaac
 * @brief Busca la metadata de una imagen por medio de su nombre
 */
#pragma once
#include <qstring.h>
#include <QString>
#include <QApplication>
#include <QInputDialog>
#include <QMessageBox>
class MetaData
{
public:
	QString FindMetadata(QString id);
	void SetMetaData(QString data);
	QString Data;

private:

};
/**
	 * @authors Rodriguez Hernández Olman Isaac
	 * @brief Permite buscar la metadata de una imagen a partir de nombre o del id de la imagen
	 * @param id Nombre de la imagen o id
	 */
QString MetaData::FindMetadata(QString id)
{
	QString result = "NO ENCONTRE NI MIERDA";
	QStringList a = Data.split("{");
	for (auto b : a) {
		if (b.contains(id)) {
			result = b;
		}
	}
	return result;
}

void MetaData::SetMetaData(QString data) {
	this->Data = data;
}
