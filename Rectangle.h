/**Rectangle.h Code*/

#ifndef RECTANGLE_ 
#define RECTANGLE_

#include "RectangleInterface.h"

class Rectangle : public RectangleInterface
{
    public:
        Rectangle();
        void setHeight(double newHeight);
        double getHeight() const;

        void setWidth(double newWidth);
        double getwWidth() const;

        double getArea() const;
    private:
        double height;
        double width;
    };
#endif