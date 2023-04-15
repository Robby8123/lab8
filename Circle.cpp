#include "circle.h"
#include <cmath>

double Circle::getArea() const {
    return M_PI * m_radius * m_radius;
}

const char* Circle::printName() const {
    return "Circle";
}
