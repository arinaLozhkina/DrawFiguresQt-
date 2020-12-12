#include <fig.h>
#include <draw.h>
#include <cmath>


Circle::Circle(int x, int y, int width, int height)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

Circle* Circle::createCircle(int x, int y, int radius) // рисуем круг
{
    Circle* newCircle = new Circle(x, y, radius * 2, radius * 2);
    return newCircle;
}

void Circle::drawFigure(Representer *representer)
{
    representer->draw(this);
}

Coordinates Circle::getDrawPoint() // возвращает координаты тыка
{
    int half_height = height / 2;
    int half_width = width / 2;
    return Coordinates(x - half_width, y - half_height);
}

bool Circle::isPointInFigure(int cur_x, int cur_y) // тык в круге?
{
    int half_width = width / 2;
    return ((cur_x - x) * (cur_x - x) + (cur_y - y) * (cur_y - y) <= half_width * half_width);
}

Coordinates Rectangle::getDrawPoint() // возвращает координаты тыка
{
    int half_height = height / 2;
    int half_width = width / 2;
    return Coordinates(x - half_width, y - half_height);
}

Rectangle::Rectangle(int x, int y, int width, int height) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

void Rectangle::drawFigure(Representer* representer) { // рисуем прямоугольник
    representer->draw(this);
}

bool Rectangle::isPointInFigure(int cur_x, int cur_y) { // тык в прямоугольнике?
    int half_height = height / 2;
    int half_width = width / 2;
    return (cur_x >= x - half_width) and (cur_x <= x + half_width) and (cur_y >= y - half_height) and (cur_y <= y + half_height);
}

