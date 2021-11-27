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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Proyecto3GalleryTECClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Proyecto3GalleryTECClass)
    {
        if (Proyecto3GalleryTECClass->objectName().isEmpty())
            Proyecto3GalleryTECClass->setObjectName(QString::fromUtf8("Proyecto3GalleryTECClass"));
        Proyecto3GalleryTECClass->resize(875, 571);
        centralWidget = new QWidget(Proyecto3GalleryTECClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 90, 291, 261));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 50, 47, 13));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 80, 47, 13));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(470, 90, 351, 251));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 40, 221, 62));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_username = new QLineEdit(verticalLayoutWidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        horizontalLayout_2->addWidget(lineEdit_username);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_password = new QLineEdit(verticalLayoutWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));

        horizontalLayout->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(140, 160, 75, 23));
        Proyecto3GalleryTECClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Proyecto3GalleryTECClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 875, 21));
        Proyecto3GalleryTECClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Proyecto3GalleryTECClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Proyecto3GalleryTECClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Proyecto3GalleryTECClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Proyecto3GalleryTECClass->setStatusBar(statusBar);

        retranslateUi(Proyecto3GalleryTECClass);

        QMetaObject::connectSlotsByName(Proyecto3GalleryTECClass);
    } // setupUi

    void retranslateUi(QMainWindow *Proyecto3GalleryTECClass)
    {
        Proyecto3GalleryTECClass->setWindowTitle(QApplication::translate("Proyecto3GalleryTECClass", "Proyecto3GalleryTEC", nullptr));
        groupBox_2->setTitle(QApplication::translate("Proyecto3GalleryTECClass", "SignUp", nullptr));
        label_3->setText(QApplication::translate("Proyecto3GalleryTECClass", "Nombre:", nullptr));
        label_4->setText(QApplication::translate("Proyecto3GalleryTECClass", "TextLabel", nullptr));
        groupBox->setTitle(QApplication::translate("Proyecto3GalleryTECClass", "GroupBox", nullptr));
        label->setText(QApplication::translate("Proyecto3GalleryTECClass", "UserName", nullptr));
        label_2->setText(QApplication::translate("Proyecto3GalleryTECClass", "Password", nullptr));
        pushButton_login->setText(QApplication::translate("Proyecto3GalleryTECClass", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Proyecto3GalleryTECClass: public Ui_Proyecto3GalleryTECClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROYECTO3GALLERYTEC_H
