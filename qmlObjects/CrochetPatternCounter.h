#ifndef CROCHETPATTERNCOUNTER_H
#define CROCHETPATTERNCOUNTER_H

#include <QObject>
#include <QQmlContext>
#include <QGuiApplication>
#include <QQuickView>
#include "LeftDisplayArea.h"
#include "RightDisplayArea.h"

class CrochetPatternCounter : public QObject
{
    Q_OBJECT
public:
    CrochetPatternCounter(QGuiApplication* app);

signals:

private:
    bool InitializeQMLObjects(QQuickView* pView);
    void ConnectUIHandlersWithQMLObjects();
    bool RegisterQMLQbjects(QQuickView* pView);

    QQmlContext *context;
    QQuickView *quickView;
    LeftDisplayArea *pLeftDisplayArea;
    RightDisplayArea *pRightDisplayArea;
};

#endif // CROCHETPATTERNCOUNTER_H
