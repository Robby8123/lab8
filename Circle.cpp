#include "Circle.h"

const double Circle::PI = 3.14;

Circle::Circle() : Circle(0) {}

Circle::Circle(double radius) : radius_(radius) {}

double Circle::getArea() const {
    return PI * radius_ * radius_;
}
