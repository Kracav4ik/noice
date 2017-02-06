#include "MainWindow.h"


MainWindow::MainWindow() {
    setupUi(this);

    widget->setCallback([this](QPainter& p) {
        double r = doubleSpinBox->value();
        for (int n0 = 0; n0 < 201; ++n0) {
            p.setPen(QColor(n0 + 55, 0, 255 - n0, 128));
            int n = n0;
            for (int x = 0; x < 301; ++x) {
//            p.drawPoint(x, n);
                p.drawLine(10 * x, n, 10 * x + 9, n);
                n = (int) (r * n * (1 - n / 200.f));
            }
        }
    });

    limit->setCallback([this](QPainter& p) {
        p.setPen(QColor(255, 0, 0, 3));
        for (int r0 = 0; r0 < 401; r0+=1) {
            float r = 2.4f + 4*r0/1000.f;
            for (int n0 = 0; n0 < 201; ++n0) {
                float n = n0 / 200.f;
                for (int _ = 0; _ < 300; ++_) {
                    n = r * n * (1 - n);
                }
                for (int _ = 0; _ < 30; ++_) {
                    n = r * n * (1 - n);
                    p.drawPoint(r0, 200-(int) (200 * n));
                }
            }
        }
    });

    connect(doubleSpinBox, SIGNAL(valueChanged(double)), widget, SLOT(update()));

    show();
}
