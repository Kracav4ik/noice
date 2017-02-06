#pragma once

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>


class CanvasWidget : public QWidget {
Q_OBJECT
public:
    CanvasWidget(QWidget *parent);


protected:
    void paintEvent(QPaintEvent *event) override;
};

