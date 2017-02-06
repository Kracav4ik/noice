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

    connect(doubleSpinBox, SIGNAL(valueChanged(double)), widget, SLOT(update()));

    show();
}
