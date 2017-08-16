#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>

class Game: public QGraphicsView {
public:
    // constructor
    Game(QWidget* parent=NULL);

    // public methods
    void start();

    // public attributes
    QGraphicsScene* scene;
    // HexBoard* hexBoard; TODO
    QString whosTurn;

};

#endif // GAME_H
