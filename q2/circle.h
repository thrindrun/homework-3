#ifndef CIRCLE_H
#define CIRCLE_H

#include "point2d.h"
class Circle {
    public:
        Circle(const double x=0,const double y=0,const double r=1);
        Circle(const Point2D& src,const double r);
        void setRadius(const double r);
        void setCenter(const double x,const double y);
        void setCenter(const Point2D& src);
        double getRadius() const;
        Point2D getCenter() const;
        void displayInfo() const;
        double area() const;
    private:
        Point2D center;
        double radius;
};

#endif
