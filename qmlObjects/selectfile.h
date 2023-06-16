#ifndef SELECTFILE_H
#define SELECTFILE_H

#include <QObject>

class SelectFile : public QObject
{
    Q_OBJECT
public:
    explicit SelectFile(QObject *parent = nullptr);

signals:

};

#endif // SELECTFILE_H
