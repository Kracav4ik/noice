#pragma once

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>


class CanvasWidget : public QWidget {
Q_OBJECT
private:
    double r;
public:
    CanvasWidget(QWidget *parent);

public slots:
    void setR(double new_r);

protected:
    void paintEvent(QPaintEvent *event) override;
};

