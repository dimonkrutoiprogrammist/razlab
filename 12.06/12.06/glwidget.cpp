#include "glwidget.h"
#include <QPainter>
#include <QPen>
#include <QPalette>
#include <QPaintEvent>

int   GLWidget::currentFunction = 0; 
float GLWidget::scaleX = 1.0f;  
float GLWidget::scaleY = 1.0f;  
float GLWidget::offsetX = 0.0f; 


GLWidget::GLWidget(QWidget *parent) : QWidget(parent)
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
}


float GLWidget::func(float x)
{
    switch(currentFunction)
    {
    case 0:  return sin(x);
    case 1:  return cos(x);
    case 2:  return sin(2 * x);
    case 3:  return cos(3 * x);
    case 4:  return sin(x) * cos(2 * x);
    default: return sin(x);
    }
}


void GLWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this); 
    painter.setRenderHint(QPainter::Antialiasing); 

  
    int w = width();
    int h = height();
    int cx = w / 2;
    int cy = h / 2;
    float pixelPerUnit = 35.0f;

  
    painter.fillRect(rect(), Qt::black);

 
    painter.setPen(QPen(Qt::gray, 1.5));
    painter.drawLine(0, cy, w, cy); 
    painter.drawLine(cx, 0, cx, h); 

 
    painter.setPen(QPen(QColor(255, 255, 0), 2.5));

  
    const int steps = 700;
    QPointF prevPoint;

    
    for (int i = 0; i <= steps; ++i)
    {
        float x = -10.0f + 20.0f * i / steps + offsetX;
        float y = func(x) * scaleY;

        int px = cx + static_cast<int>(x * scaleX * pixelPerUnit);
        int py = cy - static_cast<int>(y * pixelPerUnit);

        QPointF currentPoint(px, py);

       
        if (i > 0)
            painter.drawLine(prevPoint, currentPoint);

        prevPoint = currentPoint;
    }
}


void GLWidget::ChangeFunction(int func)
{
    currentFunction = func;
    update();
}


void GLWidget::ChangeScaleX(int value)
{
    scaleX = value / 50.0f;
    update();
}


void GLWidget::ChangeScaleY(int value)
{
    scaleY = value / 50.0f;
    update();
}


void GLWidget::ChangeOffsetX(int value)
{
    offsetX = (value - 50) / 5.0f;
    update();
}