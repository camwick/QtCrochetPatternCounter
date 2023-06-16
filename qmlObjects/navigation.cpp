#include "navigation.h"

Navigation::Navigation()
{

}

int Navigation::rowCount(const QModelIndex &index) const
{
    int numRows;

    if(index.isValid())
        numRows = 0;
    else
        numRows = NUM_NAVIGATION_ITEMS;

    return numRows;
}
