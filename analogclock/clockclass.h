#ifndef CLOCKCLASS_H
#define CLOCKCLASS_H

#include "rasterwindow.h"
#include <QThread>

class AnalogClockWindow : public RasterWindow
{
public:
    AnalogClockWindow();
    void DoSetup(QThread &cThread);

public slots:
    void DoSome(int x);

protected:
    void timerEvent(QTimerEvent *) override;
    void render(QPainter *p) override;

private:
    int m_timerId;
};

#endif // CLOCKCLASS_H
