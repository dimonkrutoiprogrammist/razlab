/********************************************************************************
** Form generated from reading UI file 'stack_1.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACK_1_H
#define UI_STACK_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stack_1
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *stack_1)
    {
        if (stack_1->objectName().isEmpty())
            stack_1->setObjectName("stack_1");
        stack_1->resize(800, 600);
        centralwidget = new QWidget(stack_1);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(470, 210, 61, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(440, 230, 113, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 300, 80, 24));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(290, 150, 121, 211));
        stack_1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(stack_1);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        stack_1->setMenuBar(menubar);
        statusbar = new QStatusBar(stack_1);
        statusbar->setObjectName("statusbar");
        stack_1->setStatusBar(statusbar);

        retranslateUi(stack_1);

        QMetaObject::connectSlotsByName(stack_1);
    } // setupUi

    void retranslateUi(QMainWindow *stack_1)
    {
        stack_1->setWindowTitle(QCoreApplication::translate("stack_1", "stack_1", nullptr));
        label->setText(QCoreApplication::translate("stack_1", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("stack_1", "\320\241\320\273\320\276\320\266\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stack_1: public Ui_stack_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACK_1_H
