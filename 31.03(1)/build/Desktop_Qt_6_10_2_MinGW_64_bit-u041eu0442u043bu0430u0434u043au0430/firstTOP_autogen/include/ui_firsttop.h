/********************************************************************************
** Form generated from reading UI file 'firsttop.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTTOP_H
#define UI_FIRSTTOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_firstTOP
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *firstTOP)
    {
        if (firstTOP->objectName().isEmpty())
            firstTOP->setObjectName("firstTOP");
        firstTOP->resize(800, 600);
        centralwidget = new QWidget(firstTOP);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(190, 120, 390, 194));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(textEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout->addWidget(radioButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        firstTOP->setCentralWidget(centralwidget);
        menubar = new QMenuBar(firstTOP);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        firstTOP->setMenuBar(menubar);
        statusbar = new QStatusBar(firstTOP);
        statusbar->setObjectName("statusbar");
        firstTOP->setStatusBar(statusbar);

        retranslateUi(firstTOP);

        QMetaObject::connectSlotsByName(firstTOP);
    } // setupUi

    void retranslateUi(QMainWindow *firstTOP)
    {
        firstTOP->setWindowTitle(QCoreApplication::translate("firstTOP", "firstTOP", nullptr));
        radioButton->setText(QCoreApplication::translate("firstTOP", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        radioButton_2->setText(QCoreApplication::translate("firstTOP", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("firstTOP", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class firstTOP: public Ui_firstTOP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTTOP_H
