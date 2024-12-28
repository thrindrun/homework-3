#include <iostream>

class Point2D {

        friend std::ostream& operator<<(std::ostream& out, const Point2D& src);
    public:
        Point2D(double src_x=0,double src_y=0);
        Point2D(const Point2D& src);
        void setX(const double src_x);
        void setY(const double src_y);
        double getX() const;
        double getY() const;
    private:
        double x;
        double y;
};
