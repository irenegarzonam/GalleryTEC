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
    void on_pushButton_rebuildC1_clicked();
    void on_pushButton_rebuildC2_clicked();
    void on_pushButton_rebuildC3_clicked();
    void on_pushButton_rebuildC4_clicked();
    void on_pushButton_previus_clicked();
    void on_pushButton_next_clicked();

private:
    Ui::ImageViewer ui;
};

