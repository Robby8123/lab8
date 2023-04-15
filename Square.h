#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape {
public:
    Square(double side) : m_side(side) {}
    double getArea() const override;
    const char* printName() const override;

private:
    double m_side;
};

#endif // SQUARE_H

