#include "CanvasWidget.h"

void CanvasWidget::paintEvent(QPaintEvent *event) {
    QPainter p(this);
    p.fillRect(rect(), QColor(127, 0, 127));
}

CanvasWidget::CanvasWidget(QWidget *parent) : QWidget(parent) {}
