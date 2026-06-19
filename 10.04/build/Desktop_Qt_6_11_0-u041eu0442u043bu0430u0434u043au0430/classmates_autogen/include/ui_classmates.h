/********************************************************************************
** Form generated from reading UI file 'classmates.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSMATES_H
#define UI_CLASSMATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_classmates
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *classmates)
    {
        if (classmates->objectName().isEmpty())
            classmates->setObjectName("classmates");
        classmates->resize(800, 600);
        centralwidget = new QWidget(classmates);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 130, 422, 222));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");

        verticalLayout_2->addWidget(textEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout->addLayout(verticalLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_4->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout_4->addWidget(pushButton);


        horizontalLayout_2->addLayout(verticalLayout_4);

        classmates->setCentralWidget(centralwidget);
        menubar = new QMenuBar(classmates);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        classmates->setMenuBar(menubar);
        statusbar = new QStatusBar(classmates);
        statusbar->setObjectName("statusbar");
        classmates->setStatusBar(statusbar);

        retranslateUi(classmates);

        QMetaObject::connectSlotsByName(classmates);
    } // setupUi

    void retranslateUi(QMainWindow *classmates)
    {
        classmates->setWindowTitle(QCoreApplication::translate("classmates", "classmates", nullptr));
        label->setText(QCoreApplication::translate("classmates", "\320\243\321\207\320\265\320\275\320\270\320\272\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("classmates", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class classmates: public Ui_classmates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSMATES_H
