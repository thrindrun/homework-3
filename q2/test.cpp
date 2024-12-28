#include "circle.h"
#include <iostream>
using namespace std;

int main() {
    // Test Point2D
    Point2D point1(3,4); // a point at x=3 y=4
    Point2D point2(point1);
    
    cout << point1.getX() << ", " << point1.getY() << endl; // 3,4
    cout << point2.getX() << ", " << point2.getY() << endl; // 3,4
    
    point2.setX(4); point2.setY(5);
    cout << point2.getX() << ", " << point2.getY() << endl; // 4,5

    // Test Circle
    Circle circle1(1,2,3);
    Circle circle2(point1,5);
    
    circle1.displayInfo(); // center (1,2) radius 3
    circle2.displayInfo(); // center (3,4) radius 5
    
    circle1.setRadius(5); circle1.setCenter(0,0); circle2.setCenter(point2);
    
    circle1.displayInfo(); // center (0,0) radius 5
    circle2.displayInfo(); // center(4,5) radius 5

    cout << circle1.getRadius() << endl;// 5
    cout << circle2.getRadius() << endl; // 5
    
}