#include "square.h"

double Square::getArea() const {
    return m_side * m_side;
}

const char* Square::printName() const {
    return "Square";
}
