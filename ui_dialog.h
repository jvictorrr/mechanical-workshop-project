/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(424, 306);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 260, 91, 31));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 61, 16));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 80, 47, 13));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 110, 47, 13));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 130, 47, 13));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 160, 47, 13));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(220, 50, 47, 13));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(230, 80, 47, 13));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(230, 110, 47, 13));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(230, 130, 47, 13));
        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(230, 160, 47, 13));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_7->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_9->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label_10->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
