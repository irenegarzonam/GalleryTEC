/********************************************************************************
** Form generated from reading UI file 'Proyecto3GalleryTEC.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROYECTO3GALLERYTEC_H
#define UI_PROYECTO3GALLERYTEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Proyecto3GalleryTECClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Proyecto3GalleryTECClass)
    {
        if (Proyecto3GalleryTECClass->objectName().isEmpty())
            Proyecto3GalleryTECClass->setObjectName(QString::fromUtf8("Proyecto3GalleryTECClass"));
        Proyecto3GalleryTECClass->resize(600, 400);
        menuBar = new QMenuBar(Proyecto3GalleryTECClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Proyecto3GalleryTECClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Proyecto3GalleryTECClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Proyecto3GalleryTECClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Proyecto3GalleryTECClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Proyecto3GalleryTECClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Proyecto3GalleryTECClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Proyecto3GalleryTECClass->setStatusBar(statusBar);

        retranslateUi(Proyecto3GalleryTECClass);

        QMetaObject::connectSlotsByName(Proyecto3GalleryTECClass);
    } // setupUi

    void retranslateUi(QMainWindow *Proyecto3GalleryTECClass)
    {
        Proyecto3GalleryTECClass->setWindowTitle(QApplication::translate("Proyecto3GalleryTECClass", "Proyecto3GalleryTEC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Proyecto3GalleryTECClass: public Ui_Proyecto3GalleryTECClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROYECTO3GALLERYTEC_H
