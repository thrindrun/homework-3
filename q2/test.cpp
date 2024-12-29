#include "EqTri.h"
#include <iostream>
using namespace std;

int main() {
    // Point2D test
    Point2D point1(3,4); // a point at x=3 y=4
    Point2D point2(point1);
    
    cout << point1.getX() << ", " << point1.getY() << endl; // 3,4
    cout << point2.getX() << ", " << point2.getY() << endl; // 3,4
    
    point2.setX(4); point2.setY(5);
    cout << point2.getX() << ", " << point2.getY() << endl; // 4,5

    // Circle test
    Circle circle1(1,2,3);
    Circle circle2(point1,5);
    
    circle1.displayInfo(); // center (1,2) radius 3 area 28.2743
    circle2.displayInfo(); // center (3,4) radius 5 area 78.5398
    
    circle1.setRadius(5); circle1.setCenter(0,0); circle2.setCenter(point2);
    
    circle1.displayInfo(); // center (0,0) radius 5 area 78.5398
    circle2.displayInfo(); // center(4,5) radius 5 area 78.5398

    cout << circle1.getCenter() << ", " << circle1.getRadius() << endl; // (0,0) 5
    cout << circle2.getCenter() << ", " <<circle2.getRadius() << endl; // (4,5) 5

    // EqTri test
    EqTri triangle1(0,0,3);
    EqTri triangle2(point1,5);
    
    triangle1.displayInfo(); // Side length 10.3923 area 46.765
    triangle2.displayInfo(); // Side length 17.32 area 129.90
    
    cout << triangle1.getCenter() << ", " << triangle1.getRadius() << endl; // (0,0), 3
    triangle2.setCenter(1,2);
    triangle2.setRadius(3);
    triangle2.displayInfo(); // Side length 10.3923 area 46.765

    return 0;
}
