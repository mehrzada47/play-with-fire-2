//
// Created by Asus on 7/12/2022.
//

#include "cup_image.h"

cup_image::cup_image(int width, int height) {
    QPixmap pixmap(":/images/winner");
    pixmap = pixmap.scaled(width,height);
    setPixmap(pixmap);
}
