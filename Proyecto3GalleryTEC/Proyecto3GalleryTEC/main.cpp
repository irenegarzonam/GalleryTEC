#include "Proyecto3GalleryTEC.h"
#include "ImageViewer.h"
#include <QtWidgets/QApplication>
#include "Raid5.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Proyecto3GalleryTEC w;
    //ImageViewer w;
    w.show();
    return a.exec();
}
