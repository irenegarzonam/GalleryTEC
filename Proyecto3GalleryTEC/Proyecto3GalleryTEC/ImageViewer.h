#pragma once
#include <QDialog>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QDialog>
#include <QFileDialog>
#include <QLabel>

namespace Ui {
    class ImageViewer;
}

class ImageViewer : public QDialog
{
    Q_OBJECT

public:
    ImageViewer(QWidget* parent = nullptr);

protected:
    void changeEvent(QEvent* e);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ImageViewer *ui;
};