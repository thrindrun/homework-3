#include "point2d.h"
class Circle {
    public:
        Circle(const double x,const double y,const double r);
        Circle(const Point2D& src,const double r);
        void setRadius(const double r);
        void setCenter(const double x,const double y);
        double getRadius() const;
        Point2D getCenter() const;
        void displayInfo();
        double area() const;
    private:
        Point2D center;
        double radius;
};