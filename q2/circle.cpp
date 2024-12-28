#include "circle.h"
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle(const double x,const double y,const double r){
    center=Point2D(x,y);
    radius=r;
}
Circle::Circle(const Point2D& src,const double r) {
    center=src;
    radius=r;
}
void Circle::setRadius(const double r) {
    radius=r;
}
void Circle::setCenter(const double x,const double y) {
    center=Point2D(x,y);
}
double Circle::getRadius() const {
    return radius;
}
Point2D Circle::getCenter() const {
    return center;
}
double Circle::area() const {
    return M_PI*radius*radius;
}
void Circle::displayInfo() {
    cout << "Center: (" << center.getX() << ", " << center.getY() << ")" << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area() << endl;
}