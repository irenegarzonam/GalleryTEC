# GalleryTEC
El objetivo del proyecto es implementar una aplicación de escritorio que permita el almacenamiento
Biblioteca de imágenes de múltiples usuarios, es posible recuperarse de fallas y aplicar algoritmos
comprimido. La aplicación debe implementarse en C ++ en Linux. La galería corresponde a un conjunto 
de imágenes. Cada usuario de GalleryTEC puede tener múltiples. Cada galería puede tener tantas 
imágenes como desee el usuario. Los usuarios deben estar autenticados al ingresar al sistema y solo 
pueden ver su galería y las imágenes en cada galería. Como se puede ver en el modelo anterior, el 
nombre de la galería debe estar encima de la imagen y el nombre de la imagen debe estar debajo de 
la imagen. La opción anterior le permite ver la imagen anterior.La siguiente opción le permite ver 
la siguiente imagen. 

La imagen debe distribuirse en la matriz de discos virtuales, por lo que bibliotecas o ciertos 
componentes que permiten el control de estos discos virtuales y permiten operaciones. Desde 
cualquier sistema de archivos: leer, escribir, buscar. Cada disco virtual es equivalente a una 
carpeta en el sistema de archivos y funciona como RAID 5. RAID debe implementarse utilizando al menos
cuatro discos.Por ejemplo, suponga que se guarda una imagen de n bytes. La biblioteca está llamada a 
escribir sistema de archivos, divida el archivo en tres bloques, calcule el bloque de paridad y cree
para cada bloque un archivo en la carpeta del disco virtual.
