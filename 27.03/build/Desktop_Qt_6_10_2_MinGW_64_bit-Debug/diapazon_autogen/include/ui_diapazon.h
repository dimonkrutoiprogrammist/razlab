/********************************************************************************
** Form generated from reading UI file 'diapazon.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAPAZON_H
#define UI_DIAPAZON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_diapazon
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *diapazon)
    {
        if (diapazon->objectName().isEmpty())
            diapazon->setObjectName("diapazon");
        diapazon->resize(800, 600);
        centralwidget = new QWidget(diapazon);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 170, 221, 16));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(350, 190, 99, 84));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        diapazon->setCentralWidget(centralwidget);
        menubar = new QMenuBar(diapazon);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        diapazon->setMenuBar(menubar);
        statusbar = new QStatusBar(diapazon);
        statusbar->setObjectName("statusbar");
        diapazon->setStatusBar(statusbar);

        retranslateUi(diapazon);

        QMetaObject::connectSlotsByName(diapazon);
    } // setupUi

    void retranslateUi(QMainWindow *diapazon)
    {
        diapazon->setWindowTitle(QCoreApplication::translate("diapazon", "diapazon", nullptr));
        label->setText(QCoreApplication::translate("diapazon", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        lineEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("diapazon", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diapazon: public Ui_diapazon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAPAZON_H
