#include "ImageViewer.h"
#include "ui_ImageViewer.h"
#include "Raid5.h"

ImageViewer::ImageViewer(QWidget* parent)
    : QMainWindow(parent)
    
{
    ui.setupUi(this);
    QPixmap pix("/home/rpi/Desktop/Picture/Sample Pictures/Chrysanthemum.jpg");
    ui.label_pic->setPixmap(pix);
}



void ImageViewer::changeEvent(QEvent* e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui.retranslateUi(this);
        break;
    default:
        break;
    }
}
Raid5 raid;
void ImageViewer::on_pushButton_browse_clicked()
{
    //Code to open the image file
    QFileDialog dialog(this);
    dialog.setNameFilter(tr("Images (*.png *.xpm *.jpg)"));
    dialog.setViewMode(QFileDialog::Detail);
    QString fileName = QFileDialog::getOpenFileName(this, tr("Image Files (*.png *.jpg *.bmp)"));
    if (!fileName.isEmpty())
    {
        QImage image(fileName);
        ui.label_pic->setPixmap(QPixmap::fromImage(image));
    }
    
    raid.set_iPath(fileName.toStdString());
    raid.Striping();
    raid.send_to_database();
    fileName.clear();
}

void ImageViewer::on_pushButton_rebuildC1_clicked() 
{
    raid.Rebuild(1);
}

void ImageViewer::on_pushButton_rebuildC2_clicked()
{
    raid.Rebuild(2);
}

void ImageViewer::on_pushButton_rebuildC3_clicked()
{
    raid.Rebuild(3);
}

void ImageViewer::on_pushButton_rebuildC4_clicked()
{
    raid.Rebuild(4);
}

void ImageViewer::on_pushButton_previus_clicked()
{

}

void ImageViewer::on_pushButton_next_clicked()
{

}