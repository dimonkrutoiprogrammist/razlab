#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Лабораторная 10 - Задание 2");

    resize(700, 600);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateClock);
    timer->start(1000);        
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updateClock()
{
    seconds = (seconds + 1) % 60;
    update();
}


void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p(this);

    QPoint center(350, 300);
    int radius = 200;

  
    p.setPen(QPen(Qt::black, 5));
    p.drawEllipse(center, radius, radius);

   
    double angle = seconds * 6.0 * M_PI / 180.0;   

    QPoint end(center.x() + (radius - 30) * sin(angle),
               center.y() - (radius - 30) * cos(angle));

    p.setPen(QPen(Qt::red, 4)); 
    p.drawLine(center, end);

  
    p.setBrush(Qt::black);
    p.drawEllipse(center, 8, 8);
}