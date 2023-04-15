#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual double getArea() const = 0;
    virtual const char* printName() const = 0;
};

#endif // SHAPE_H
