#ifndef PICTURESETTINGS_H
#define PICTURESETTINGS_H

#include <QAbstractListModel>
#include <QObject>

class PictureSettings : public QAbstractListModel
{
public:
    explicit PictureSettings(QObject *parent = nullptr);
};

#endif // PICTURESETTINGS_H


// thinking to have 2 classes here for lower and upper sections
