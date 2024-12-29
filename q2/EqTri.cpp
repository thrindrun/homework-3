#include "EqTri.h"
#include "cmath"
#include <iostream>
using namespace std;

EqTri::EqTri(const double x,const double y, const double r) : Circle(x,y,r) {}
EqTri::EqTri(const Point2D& src,const double r) : Circle(src,r) {}

double EqTri::area() const {
    return sqrt(3)*3*getRadius()*getRadius();
}

void EqTri::displayInfo() const {
    cout << "Side Length: " << 2*getRadius()*sqrt(3) << ", ";
    cout << "Area: " << area() << endl;
}
// a = 2*r*sqrt(3)
// area=sqrt(3)*a^2/4 = 3*r^2*sqrt(3)
