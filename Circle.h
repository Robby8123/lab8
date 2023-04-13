#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
    Circle();
    explicit Circle(double radius);
    double getArea() const override;
private:
    static const double PI;
    double radius_;
};

#endif // CIRCLE_H
