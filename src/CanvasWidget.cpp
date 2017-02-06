#include "CanvasWidget.h"

void CanvasWidget::paintEvent(QPaintEvent *event) {
    QPainter p(this);
    p.fillRect(rect(), QColor(255, 255, 255));
    if (callback) {
        callback(p);
    }
}

CanvasWidget::CanvasWidget(QWidget *parent) : QWidget(parent) {}

void CanvasWidget::setCallback(std::function<void(QPainter &)> cb) {
    callback = cb;
}
