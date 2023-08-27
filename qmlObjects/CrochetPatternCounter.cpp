#include "CrochetPatternCounter.h"

CrochetPatternCounter::CrochetPatternCounter(QGuiApplication* app)
{
    quickView = new QQuickView;

    //Initialize QML objects
    if(InitializeQMLObjects(quickView))
    {
        // connect qml objects slots and signals together to get everything talking
        ConnectUIHandlersWithQMLObjects();

        // register QML objects
        RegisterQMLQbjects(quickView);
    }

    quickView->setResizeMode(QQuickView::SizeRootObjectToView);
    quickView->setSource(QUrl("qrc:/qmlFiles/CrochetPatternCounter.qml"));
    quickView->show();
}

bool CrochetPatternCounter::InitializeQMLObjects(QQuickView *pView)
{
    pLeftDisplayArea = new LeftDisplayArea(this);
    pRightDisplayArea = new RightDisplayArea(this);

    return (pLeftDisplayArea && pRightDisplayArea);
}

void CrochetPatternCounter::ConnectUIHandlersWithQMLObjects()
{

}

bool CrochetPatternCounter::RegisterQMLQbjects(QQuickView *pView)
{
    bool retval = false;

    if(pView)
    {
        context = pView->rootContext();

        context->setContextProperty("pLeftDisplayArea", pLeftDisplayArea);

        retval = true;
    }

    qmlRegisterType<LeftDisplayArea>("CrochetCounter.LeftDisplayArea", 1, 0, "LeftDisplayArea");

    return retval;
}
