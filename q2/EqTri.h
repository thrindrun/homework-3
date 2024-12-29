#ifndef EQTRI_H
#define EQTRI_H

#include "circle.h"

class EqTri : public Circle {
    public:
        EqTri(const double x=0,const double y=0, const double r=1);
        EqTri(const Point2D& src,const double r);
        double area() const;
        void displayInfo() const;
};

#endif
