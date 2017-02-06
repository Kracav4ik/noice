#pragma once

#include <QMainWindow>

#include "ui_noice.h"


class MainWindow : public QMainWindow, private Ui::MainWindow {
public:
    MainWindow();

};

