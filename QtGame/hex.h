#ifndef HEX_H
#define HEX_H

#include <QGraphicsPolygonItem>

class Hex: public QGraphicsPolygonItem {
public:
    // constructor
    Hex(QGraphicsItem* parent=NULL);

    // getters
    int getAttackOf(int side);
    bool getIsPlaced();
    QString getOwner();

    // setters
    void setAttackOf(int side, int attack);
    void setOwner(QString player);
    void setIsPlaced(bool b);

private:
    bool isPlaced;
    QString owner;
    int side0Attack;
    int side1Attack;
    int side2Attack;
    int side3Attack;
    int side4Attack;
    int side5Attack;
};

#endif // HEX_H
