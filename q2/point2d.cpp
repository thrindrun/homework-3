#include "point2d.h"
#include <iostream>
using namespace std;

Point2D::Point2D(double src_x, double src_y) {
    x=src_x; y=src_y;
}
Point2D::Point2D(const Point2D& src) : x(src.x), y(src.y) {}

void Point2D::setX(const double src_x) {
    x=src_x;
}
void Point2D::setY(const double src_y) {
    y=src_y;
}
double Point2D::getX() const {
    return x;
}
double Point2D::getY() const{
    return y;
}
