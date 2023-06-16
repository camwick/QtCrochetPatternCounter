#ifndef NAVIGATION_H
#define NAVIGATION_H

#include <QAbstractListModel>

enum eNavigationID {
    NUM_NAVIGATION_ITEMS,
};

class Navigation : public QAbstractListModel
{
    Q_OBJECT
public:
    Navigation();

    enum {
        ButtonLabel,
    };

    enum ButtonFunction {
        Counter,
        Settings,
        About,
    };
    Q_ENUM(ButtonFunction)

    int rowCount(const QModelIndex &index = QModelIndex()) const override;

signals:

};

#endif // NAVIGATION_H
