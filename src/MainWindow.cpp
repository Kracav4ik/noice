#include "MainWindow.h"


MainWindow::MainWindow() {
    setupUi(this);

    connect(doubleSpinBox, SIGNAL(valueChanged(double)), widget, SLOT(setR(double)));

    show();
}
