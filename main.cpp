#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "qmlObjects/CrochetPatternCounter.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    app.setApplicationName("Crochet Pattern Counter");

    CrochetPatternCounter *pCrochetCounter = new CrochetPatternCounter(&app);

//    QQmlApplicationEngine engine;
//    engine.addImportPath(":./");
//    const QUrl url(u"qrc:/qmlFiles/main.qml"_qs);
//    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
//        &app, [url](QObject *obj, const QUrl &objUrl) {
//            if (!obj && url == objUrl)
//                QCoreApplication::exit(-1);
//        }, Qt::QueuedConnection);
//    engine.load(url);

    int retval = app.exec();
    delete pCrochetCounter;
    return retval;
}
