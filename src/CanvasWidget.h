#pragma once

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <functional>


class CanvasWidget : public QWidget {
Q_OBJECT
private:
    std::function<void(QPainter &)> callback;

public:
    CanvasWidget(QWidget *parent);
    void setCallback(std::function<void(QPainter &)> cb);

protected:
    void paintEvent(QPaintEvent *event) override;
};

