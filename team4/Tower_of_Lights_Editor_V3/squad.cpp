#include "squad.h"

Squad::Squad(QWidget *parent)
{
    QList<CellWidget*> *cellList = new QList<CellWidget*>();
    for(int i=0; i<4; i++) {
        cellList->append(new CellWidget(NULL, 0, i, QColor(Qt::black), Q_NULLPTR));
    }
}
