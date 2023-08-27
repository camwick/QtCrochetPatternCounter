#ifndef COUNTERNAV_H
#define COUNTERNAV_H

#include <QObject>

class CounterNav : public QObject
{
    Q_OBJECT
public:
    explicit CounterNav(QObject *parent = nullptr);

signals:

};

#endif // COUNTERNAV_H
