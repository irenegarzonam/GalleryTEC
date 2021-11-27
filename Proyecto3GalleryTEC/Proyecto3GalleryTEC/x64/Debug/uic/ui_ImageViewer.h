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
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_pic;
    QPushButton *pushButton_metadata;
    QPushButton *pushButton_next;
    QPushButton *pushButton_previous;
    QLabel *label_nombre;
    QLabel *label_galeria;
    QPushButton *pushButton_browse;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(810, 524);
        label_pic = new QLabel(Dialog);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(170, 30, 451, 301));
        pushButton_metadata = new QPushButton(Dialog);
        pushButton_metadata->setObjectName(QString::fromUtf8("pushButton_metadata"));
        pushButton_metadata->setGeometry(QRect(50, 450, 75, 23));
        pushButton_next = new QPushButton(Dialog);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));
        pushButton_next->setGeometry(QRect(600, 380, 75, 23));
        pushButton_previous = new QPushButton(Dialog);
        pushButton_previous->setObjectName(QString::fromUtf8("pushButton_previous"));
        pushButton_previous->setGeometry(QRect(110, 380, 75, 23));
        label_nombre = new QLabel(Dialog);
        label_nombre->setObjectName(QString::fromUtf8("label_nombre"));
        label_nombre->setGeometry(QRect(230, 390, 351, 21));
        label_nombre->setAlignment(Qt::AlignCenter);
        label_galeria = new QLabel(Dialog);
        label_galeria->setObjectName(QString::fromUtf8("label_galeria"));
        label_galeria->setGeometry(QRect(146, 10, 531, 20));
        label_galeria->setAlignment(Qt::AlignCenter);
        pushButton_browse = new QPushButton(Dialog);
        pushButton_browse->setObjectName(QString::fromUtf8("pushButton_browse"));
        pushButton_browse->setGeometry(QRect(630, 470, 75, 23));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(630, 440, 151, 16));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label_pic->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        pushButton_metadata->setText(QApplication::translate("Dialog", "MetaData", nullptr));
        pushButton_next->setText(QApplication::translate("Dialog", "Next", nullptr));
        pushButton_previous->setText(QApplication::translate("Dialog", "Previous", nullptr));
        label_nombre->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_galeria->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        pushButton_browse->setText(QApplication::translate("Dialog", "Browse", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Agregar imagen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_H
