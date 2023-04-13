#include <iostream>
#include <vector>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Trapezoid.h"

int main() {
    // Instantiate objects with given values
    Circle circle(2.5);
    Square square(4.0);
    Rectangle rectangle(5.0, 3.0);
    Trapezoid trapezoid(4.0, 6.0, 2.0);
    
    // Create vector of Shape pointers
    std::vector<Shape*> shapeVect {&circle, &square, &rectangle, &trapezoid};
    
    // Print name and area of each object in vector
    for (auto shapePtr : shapeVect) {
        std::cout << shapePtr->printName() << ": " << shapePtr->getArea() << std::endl;
    }
    
    return 0;
}
