//
// Created by IHC on 7/11/2022.
//

#include "TextField.h"
#include <QFont>
#include <QPainter>
#include <QTextDocument>
#include <QStyleOptionGraphicsItem>

TextField::TextField(int width, int height):width(width),height(height), QGraphicsTextItem() {
    setDefaultTextColor((QColor("black")));
    QFont font;
    font.setPixelSize(23);
    font.setBold(true);
    setFont(font);
    setTextInteractionFlags(Qt::TextEditorInteraction);
    setTextWidth(width);
    document()->setDocumentMargin(10);
}

QRectF TextField::boundingRect() const {
    auto rect = QGraphicsTextItem::boundingRect();
    rect.setWidth(width);
    rect.setHeight(height);
    return rect;
}

void TextField::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {

//    setHtml("<html><body><h4>This is a form</h4><form ><input type=\"email\" placeholder=\"type your email\"><br><input type=\"password\" placeholder=\"password\"><br><input type=\"submit\" value=\"تایید\"></form></body></html>");
    QPixmap pixmap(":/images/input");
    pixmap =pixmap.scaled(width,height);
    painter->setBrush(pixmap);
    painter->drawRect(boundingRect());
    QStyleOptionGraphicsItem newOption(*option);
    newOption.state = QStyle::State_None;
    QGraphicsTextItem::paint(painter, &newOption, widget);
}
