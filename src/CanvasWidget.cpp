#include "CanvasWidget.h"

void CanvasWidget::paintEvent(QPaintEvent *event) {
    QPainter p(this);
    p.fillRect(rect(), QColor(255, 255, 255));
    for (int n0 = 0; n0 < 201; ++n0) {
        p.setPen(QColor(n0 + 55, 0, 255 - n0));
//        p.drawLine(0, n0, 300, n0);
        float YY = n0 / 200.f;
        int n = n0;
        for (int x = 0; x < 301; ++x) {
//            p.drawPoint(x, n);
            p.drawLine(10 * x, n, 10 * x + 10, n);
            n = (int) (r * n * (1 - n / 200.f));
        }
    }
}

CanvasWidget::CanvasWidget(QWidget *parent) : QWidget(parent), r(1) {}

void CanvasWidget::setR(double new_r) {
    r = new_r;
    update();
}
