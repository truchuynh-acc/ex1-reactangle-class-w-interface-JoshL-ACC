/**Driver Code*/

/**
Programmer: Josh Leon
Project number: 1
Project Desc: Quadratic Expression class
Course: COSC-2436-007 (92905) III Data Structures
Date: 1/23/24
*/

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle theRectangle;

    cout << "Initial state of the Rectangle" << endl;
    cout << "       Height = " << theRectangle.getHeight() << endl;
    cout << "       Width  = " << theRectangle.getwWidth() << endl;
    cout << "       Area  =  " << theRectangle.getArea() << endl;
    theRectangle.setHeight(7.0);
    theRectangle.setWidth(8.0);
    cout << "Current state of the circle" << endl;
    cout << "         Height = " << theRectangle.getHeight() << endl;
    cout << "         Width = " << theRectangle.getwWidth() << endl;
    cout << "         Area  =  " << theRectangle.getArea() << endl;

    return 0;
}
