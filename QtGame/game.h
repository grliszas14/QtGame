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
    QString getWhosTurn();
    void setWhosTurn(QString player);

    // public attributes
    QGraphicsScene* scene;
    HexBoard* hexBoard;

public slots:
    void start();

private:
    void drawPanel(int x, int y, int width, int height, QColor color, double opacity);
    void drawGUI();
    QString whosTurn_;
    QGraphicsTextItem* whosTurnText;
};

#endif // GAME_H
