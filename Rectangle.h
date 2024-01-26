/**Rectangle.h Code*/

#ifndef RECTANGLE_ 
#define RECTANGLE_

#include "RectangleInterface.h"

class Rectangle : public RectangleInterface
{
    public:
        Rectangle();
        bool updateHeightandWidth(double inputHeight, double inputWidth);

       // void rectanglePrompt() const;

        void setHeight() const;

        void setWidth() const; 

        double getHeight() const;

        double getwWidth() const;

        double getArea() const;
    private:
        double height;
        double width;
};
#endif