#include "rectangle.h"

double Rectangle::getArea() const {
    return m_length * m_width;
}

const char* Rectangle::printName() const {
    return "Rectangle";
}
