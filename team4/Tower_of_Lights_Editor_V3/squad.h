#ifndef SQUAD_H
#define SQUAD_H

#include <QObject>
#include <QWidget>
#include <cell.h>

class Squad : public QWidget
{
    Q_OBJECT
private:
    QList<CellWidget*> cellList;
public:
    explicit Squad( QWidget *parent=Q_NULLPTR);

signals:

public slots:
};

#endif // SQUAD_H
