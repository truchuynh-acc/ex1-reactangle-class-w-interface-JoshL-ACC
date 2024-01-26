/**Rectangle.cpp Code*/

#include "Rectangle.h"

Rectangle::Rectangle()
{
    height = 5.0;
    width = 6.0;
}

void Rectangle::setHeight(double newHeight)
{
    if(newHeight > 0.0)
    {
        height = newHeight;
    }
}

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setWidth(double newWidth)
{
    if(newWidth > 0.0)
    {
        width = newWidth;
    }
}
double Rectangle::getwWidth() const
{
    return width;
}

double Rectangle::getArea() const
{
    return width * height;
}