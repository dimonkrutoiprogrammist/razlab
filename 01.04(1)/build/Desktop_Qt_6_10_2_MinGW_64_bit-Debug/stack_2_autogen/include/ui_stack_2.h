/********************************************************************************
** Form generated from reading UI file 'stack_2.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACK_2_H
#define UI_STACK_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stack_2
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *stack_2)
    {
        if (stack_2->objectName().isEmpty())
            stack_2->setObjectName("stack_2");
        stack_2->resize(800, 600);
        centralwidget = new QWidget(stack_2);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(210, 130, 121, 261));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 250, 80, 24));
        stack_2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(stack_2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        stack_2->setMenuBar(menubar);
        statusbar = new QStatusBar(stack_2);
        statusbar->setObjectName("statusbar");
        stack_2->setStatusBar(statusbar);

        retranslateUi(stack_2);

        QMetaObject::connectSlotsByName(stack_2);
    } // setupUi

    void retranslateUi(QMainWindow *stack_2)
    {
        stack_2->setWindowTitle(QCoreApplication::translate("stack_2", "stack_2", nullptr));
        pushButton->setText(QCoreApplication::translate("stack_2", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stack_2: public Ui_stack_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACK_2_H
