/********************************************************************************
** Form generated from reading UI file 'file.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_file
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *file)
    {
        if (file->objectName().isEmpty())
            file->setObjectName("file");
        file->resize(800, 600);
        centralwidget = new QWidget(file);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 160, 524, 225));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName("textEdit_2");

        verticalLayout_2->addWidget(textEdit_2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_2);

        file->setCentralWidget(centralwidget);
        menubar = new QMenuBar(file);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        file->setMenuBar(menubar);
        statusbar = new QStatusBar(file);
        statusbar->setObjectName("statusbar");
        file->setStatusBar(statusbar);

        retranslateUi(file);

        QMetaObject::connectSlotsByName(file);
    } // setupUi

    void retranslateUi(QMainWindow *file)
    {
        file->setWindowTitle(QCoreApplication::translate("file", "file", nullptr));
        pushButton->setText(QCoreApplication::translate("file", "\320\222\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\320\265", nullptr));
        pushButton_2->setText(QCoreApplication::translate("file", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class file: public Ui_file {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H
