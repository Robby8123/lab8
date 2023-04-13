#include "Square.h"

Square::Square() : Square(0) {}

Square::Square(double side) : side_(side) {}

double Square::getArea() const {
    return side_ * side_;
}
