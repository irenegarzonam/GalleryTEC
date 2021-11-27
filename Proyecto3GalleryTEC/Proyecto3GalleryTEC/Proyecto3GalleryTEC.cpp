#include "Proyecto3GalleryTEC.h"
#include "ImageViewer.h"
#include "ui_Proyecto3GalleryTEC.h"
#include <QMessageBox>



Proyecto3GalleryTEC::Proyecto3GalleryTEC(QWidget *parent)
    : QMainWindow(parent)
    
{
    ui.setupUi(this);
}



QStringList usuarios = { "test" };
QStringList contrasenas = { "test" };

void Proyecto3GalleryTEC::on_pushButton_login_clicked()
{
    QString username = ui.lineEdit_username->text();
    QString password = ui.lineEdit_password->text();




    if (username == "test" && password == "test")
    {
        QMessageBox::information(this, "Login", "Username and password is correct");
        hide();
        imageViewer = new ImageViewer(this);
        imageViewer->show();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Username an password is not corrrect");
    }
}