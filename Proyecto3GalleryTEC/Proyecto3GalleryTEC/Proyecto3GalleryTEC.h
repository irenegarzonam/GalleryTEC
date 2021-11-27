#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Proyecto3GalleryTEC.h"
#include "ImageViewer.h"



class Proyecto3GalleryTEC : public QMainWindow
{
    Q_OBJECT

public:
    Proyecto3GalleryTEC(QWidget *parent = Q_NULLPTR);
    

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::Proyecto3GalleryTECClass ui;
    ImageViewer *imageViewer;
};
