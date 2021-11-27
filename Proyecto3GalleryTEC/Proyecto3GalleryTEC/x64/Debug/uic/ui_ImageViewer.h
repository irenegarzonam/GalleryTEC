/********************************************************************************
** Form generated from reading UI file 'ImageViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEVIEWER_H
#define UI_IMAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageViewer
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_previus;
    QPushButton *pushButton_metadata;
    QPushButton *pushButton_next;
    QPushButton *pushButton_browse;
    QLabel *label_galeria;
    QLabel *label_nombre;
    QLabel *label_pic;
    QPushButton *pushButton_rebuildC1;
    QPushButton *pushButton_rebuildC2;
    QPushButton *pushButton_rebuildC3;
    QPushButton *pushButton_rebuildC4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ImageViewer)
    {
        if (ImageViewer->objectName().isEmpty())
            ImageViewer->setObjectName(QString::fromUtf8("ImageViewer"));
        ImageViewer->resize(800, 600);
        centralwidget = new QWidget(ImageViewer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_previus = new QPushButton(centralwidget);
        pushButton_previus->setObjectName(QString::fromUtf8("pushButton_previus"));
        pushButton_previus->setGeometry(QRect(70, 400, 75, 23));
        pushButton_metadata = new QPushButton(centralwidget);
        pushButton_metadata->setObjectName(QString::fromUtf8("pushButton_metadata"));
        pushButton_metadata->setGeometry(QRect(60, 500, 75, 23));
        pushButton_next = new QPushButton(centralwidget);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));
        pushButton_next->setGeometry(QRect(660, 400, 75, 23));
        pushButton_browse = new QPushButton(centralwidget);
        pushButton_browse->setObjectName(QString::fromUtf8("pushButton_browse"));
        pushButton_browse->setGeometry(QRect(670, 490, 75, 23));
        label_galeria = new QLabel(centralwidget);
        label_galeria->setObjectName(QString::fromUtf8("label_galeria"));
        label_galeria->setGeometry(QRect(360, 0, 47, 13));
        label_nombre = new QLabel(centralwidget);
        label_nombre->setObjectName(QString::fromUtf8("label_nombre"));
        label_nombre->setGeometry(QRect(380, 370, 47, 13));
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(250, 50, 471, 301));
        pushButton_rebuildC1 = new QPushButton(centralwidget);
        pushButton_rebuildC1->setObjectName(QString::fromUtf8("pushButton_rebuildC1"));
        pushButton_rebuildC1->setGeometry(QRect(210, 500, 75, 23));
        pushButton_rebuildC2 = new QPushButton(centralwidget);
        pushButton_rebuildC2->setObjectName(QString::fromUtf8("pushButton_rebuildC2"));
        pushButton_rebuildC2->setGeometry(QRect(320, 500, 75, 23));
        pushButton_rebuildC3 = new QPushButton(centralwidget);
        pushButton_rebuildC3->setObjectName(QString::fromUtf8("pushButton_rebuildC3"));
        pushButton_rebuildC3->setGeometry(QRect(430, 500, 75, 23));
        pushButton_rebuildC4 = new QPushButton(centralwidget);
        pushButton_rebuildC4->setObjectName(QString::fromUtf8("pushButton_rebuildC4"));
        pushButton_rebuildC4->setGeometry(QRect(540, 500, 75, 23));
        ImageViewer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ImageViewer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ImageViewer->setMenuBar(menubar);
        statusbar = new QStatusBar(ImageViewer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ImageViewer->setStatusBar(statusbar);

        retranslateUi(ImageViewer);

        QMetaObject::connectSlotsByName(ImageViewer);
    } // setupUi

    void retranslateUi(QMainWindow *ImageViewer)
    {
        ImageViewer->setWindowTitle(QApplication::translate("ImageViewer", "MainWindow", nullptr));
        pushButton_previus->setText(QApplication::translate("ImageViewer", "Previus", nullptr));
        pushButton_metadata->setText(QApplication::translate("ImageViewer", "MetaData", nullptr));
        pushButton_next->setText(QApplication::translate("ImageViewer", "Next", nullptr));
        pushButton_browse->setText(QApplication::translate("ImageViewer", "Browse", nullptr));
        label_galeria->setText(QApplication::translate("ImageViewer", "TextLabel", nullptr));
        label_nombre->setText(QApplication::translate("ImageViewer", "TextLabel", nullptr));
        label_pic->setText(QApplication::translate("ImageViewer", "TextLabel", nullptr));
        pushButton_rebuildC1->setText(QApplication::translate("ImageViewer", "RebuildC1", nullptr));
        pushButton_rebuildC2->setText(QApplication::translate("ImageViewer", "RebuildC2", nullptr));
        pushButton_rebuildC3->setText(QApplication::translate("ImageViewer", "RebuildC3", nullptr));
        pushButton_rebuildC4->setText(QApplication::translate("ImageViewer", "RebuildC4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageViewer: public Ui_ImageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_H
