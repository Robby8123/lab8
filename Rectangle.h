#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle();
    Rectangle(double length, double width);
    double getArea() const override;
private:
    double length_;
    double width_;
};

#endif
