#include "you_win.h"

you_win::you_win(int width, int height) {
    QPixmap pixmap(":/images/you_win");
    pixmap = pixmap.scaled(width,height);
    setPixmap(pixmap);
}