#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
public:
    virtual double getArea() const = 0; // pure virtual/abstract function
    virtual ~Shape() = default;
    virtual std::string Shape() const = 0; // pure virtual/abstract function
    virtual std::string Shape(std::string name) const = 0; // pure virtual/abstract function
    virtual std::string printName() const final; // final function, cannot be overridden
};

#endif // SHAPE_H
