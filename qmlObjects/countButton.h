#ifndef COUNTBUTTON_H
#define COUNTBUTTON_H

#include <QObject>

class countButton : public QObject
{
    Q_OBJECT
public:
    explicit countButton(QObject *parent = nullptr);

signals:

};

#endif // COUNTBUTTON_H
