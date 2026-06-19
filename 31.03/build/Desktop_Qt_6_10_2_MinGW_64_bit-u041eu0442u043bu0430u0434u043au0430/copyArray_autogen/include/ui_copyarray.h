/********************************************************************************
** Form generated from reading UI file 'copyarray.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYARRAY_H
#define UI_COPYARRAY_H

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

class Ui_copyArray
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *copyArray)
    {
        if (copyArray->objectName().isEmpty())
            copyArray->setObjectName("copyArray");
        copyArray->resize(800, 600);
        centralwidget = new QWidget(copyArray);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 70, 524, 426));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName("textEdit_2");

        horizontalLayout->addWidget(textEdit_2);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);

        textEdit_3 = new QTextEdit(widget);
        textEdit_3->setObjectName("textEdit_3");

        verticalLayout_2->addWidget(textEdit_3);

        copyArray->setCentralWidget(centralwidget);
        menubar = new QMenuBar(copyArray);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        copyArray->setMenuBar(menubar);
        statusbar = new QStatusBar(copyArray);
        statusbar->setObjectName("statusbar");
        copyArray->setStatusBar(statusbar);

        retranslateUi(copyArray);

        QMetaObject::connectSlotsByName(copyArray);
    } // setupUi

    void retranslateUi(QMainWindow *copyArray)
    {
        copyArray->setWindowTitle(QCoreApplication::translate("copyArray", "copyArray", nullptr));
        pushButton->setText(QCoreApplication::translate("copyArray", "\320\237\320\265\321\200\320\265\320\275\320\265\321\201\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class copyArray: public Ui_copyArray {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYARRAY_H
