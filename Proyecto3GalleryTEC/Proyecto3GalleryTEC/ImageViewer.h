#
#pragma once
#include "ui_ImageViewer.h"
#include <QMainWindow>
#include <QFileDialog>
#include <QLabel>



class ImageViewer : public QMainWindow
{
    Q_OBJECT

public:
    ImageViewer(QWidget* parent = Q_NULLPTR);
  

protected:
    void changeEvent(QEvent* e);

private slots:
    void on_pushButton_browse_clicked();

private:
    Ui::ImageViewer ui;
};

