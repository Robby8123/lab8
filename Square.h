#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
public:
    Square();
    explicit Square(double side);
    double getArea() const override;
private:
    double side_;
};

#endif
