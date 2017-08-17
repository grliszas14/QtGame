#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <hexboard.h>

class Game: public QGraphicsView {
    Q_OBJECT
public:
    // constructor
    Game(QWidget* parent=NULL);

    // public methods
    void displayMainMenu();

    // public attributes
    QGraphicsScene* scene;
    HexBoard* hexBoard;
    QString whosTurn;

public slots:
    void start();
};

#endif // GAME_H
