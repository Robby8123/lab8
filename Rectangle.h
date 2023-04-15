#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double length, double width) : m_length(length), m_width(width) {}
    double getArea() const override;
    const char* printName() const override;

private:
    double m_length, m_width;
};

#endif // RECTANGLE_H

