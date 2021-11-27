#include "ImageViewer.h"
#include "ui_ImageViewer.h"

ImageViewer::ImageViewer(QWidget* parent)
    : QDialog(parent), ui(new Ui::ImageViewer*)
{
    ui.setupUi(this);
    QPixmap pix("/home/rpi/Desktop/Picture/Sample Pictures/Chrysanthemum.jpg");
    ui->label_pic->setPixmap(pix);
}

void ImageViewer::changeEvent(QEvent* e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void ImageViewer::on_pushButton_clicked()
{
    //Code to open the image file
    QFileDialog dialog(this);
    dialog.setNameFilter(tr("Images (*.png *.xpm *.jpg)"));
    dialog.setViewMode(QFileDialog::Detail);
    QString fileName = QFileDialog::getOpenFileName(this, tr("Image Files (*.png *.jpg *.bmp)"));
    if (!fileName.isEmpty())
    {
        QImage image(fileName);
        ui->label_pic->setPixmap(QPixmap::fromImage(image));
    }
}