#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QFile"
#include "QFileInfo"
#include "QFileDialog"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   
    QString filePath = QFileDialog::getOpenFileName(this, "Выберите текстовый файл", "", "(*.txt)");

   
    if (filePath.isEmpty())
        return;


    QFile file(filePath);   
    QFileInfo fileInfo(filePath);   

    QString result = "<h3>Информация о файле:</h3>";    

   
    result += "<b>Имя файла:</b> " + fileInfo.fileName() + "<br>";
    result += "<b>Полный путь:</b> " + fileInfo.absoluteFilePath() + "<br>";
    result += "<b>Размер:</b> " + QString::number(fileInfo.size()) + " байт<br>";
    result += "<b>Дата создания:</b> " + fileInfo.birthTime().toString("dd.MM.yyyy HH:mm:ss") + "<br>";
    result += "<b>Дата изменения:</b> " + fileInfo.lastModified().toString("dd.MM.yyyy HH:mm:ss") + "<br>";
    result += "<b>Только для чтения:</b> " + QString(fileInfo.isReadable() && !fileInfo.isWritable() ? "Да" : "Нет") + "<br>";
    result += "<b>Скрытый:</b> " + QString(fileInfo.isHidden() ? "Да" : "Нет") + "<br>";
    result += "<b>Существует:</b> " + QString(fileInfo.exists() ? "Да" : "Нет") + "<br><br>";

   
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл!");
        return;
    }

   
    QTextStream text(&file);
    QString content = text.readAll();
    file.close();

   
    result += "<h3>Содержимое файла:</h3>";
    result += "<pre>" + content.toHtmlEscaped() + "</pre>";

   
    ui->label->setText(result);
}

