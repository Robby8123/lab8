#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
public:
    Circle(double radius) : m_radius(radius) {}
    double getArea() const override;
    const char* printName() const override;

private:
    double m_radius;
};

#endif // CIRCLE_H
