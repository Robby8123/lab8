#include "Rectangle.h"

Rectangle::Rectangle() : Rectangle(0, 0) {}

Rectangle::Rectangle(double length, double width) : length_(length), width_(width) {}

double Rectangle::getArea() const {
    return length_ * width_;
