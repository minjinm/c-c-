/* 
 CH-230-A
 a12_p6.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include <iostream>
#include "Square.h"

Square::Square(const char *n, double a) : Area(n) {
    side = a;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return side*side;
}
double Square::calcPerimeter() const {
	std::cout << "calcPerimeter of Square...";
	return 4*(side);
}

