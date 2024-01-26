/**Rectangle.cpp Code*/

#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
    height = 1.0;
    width = 1.0;
}

bool Rectangle::updateHeightandWidth(double newHeight, double newWidth)
{

    if(newHeight && newWidth > 0.0)
    {
        height = newHeight;
        width = newWidth;

        return true;
    }
    else
    {
        return false;
    }
}

/*void Rectangle::rectanglePrompt() const
{
    std::cout << "Please enter the height value, then press ENTER" << std::endl;
    std::cin >> enterheight;
    std:: cout << "Please enter the width value, then press ENTER" << std::endl;
    std::cin >> enterwidth;
}*/

double Rectangle::getHeight() const
{
    return height;
}

double Rectangle::getwWidth() const
{
    return width;
}

double Rectangle::getArea() const
{
    return width * height;
}

