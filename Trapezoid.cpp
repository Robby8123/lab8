#include "trapezoid.h"

double Trapezoid::getArea() const {
    return (m_base1 + m_base2) * m_height / 2.0;
}

const char* Trapezoid::printName() const {
    return "Trapezoid";
}
