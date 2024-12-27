#include "point2d.h"
#include <iostream>
using namespace std;

point2D::point2D(double a, double b) {
    x=a; y=b;
}
void point2D::setX(double a) {
    x=a;
}
void point2D::setY(double b) {
    y=b;
}
double point2D::getX() {
    return x;
}
double point2D::getY() {
    return y;
}
