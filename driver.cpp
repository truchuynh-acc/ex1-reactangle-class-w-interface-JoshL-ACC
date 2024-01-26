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
    double enteredHeight;
    double enteredWidth;

    Rectangle theRectangle;

    cout << "Initial state of the Rectangle" << endl;
    cout << "       Height = " << theRectangle.getHeight() << endl;
    cout << "       Width  = " << theRectangle.getwWidth() << endl;
    cout << "       Area  =  " << theRectangle.getArea() << endl;
    
    cout << "Enter the height of the rectangle, then press ENTER" << endl;
    cin >> enteredHeight;
    cout << "Now enter the width of the rectangle, then press ENTER" << endl;
    cin >> enteredWidth; 

    theRectangle.updateHeightandWidth(enteredHeight, enteredWidth);


    cout << "Current state of the Rectangle" << endl;
    cout << "         Height = " << theRectangle.getHeight() << endl;
    cout << "         Width = " << theRectangle.getwWidth() << endl;
    cout << "         Area  =  " << theRectangle.getArea() << endl;

    return 0;
}
