#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "shape.h"

class Trapezoid : public Shape {
public:
    Trapezoid(double base1, double base2, double height) : m_base1(base1), m_base2(base2), m_height(height) {}
    double getArea() const override;
    const char* printName() const override;

private:
    double m_base1, m_base2, m_height;
};

#endif // TRAPEZOID_H
