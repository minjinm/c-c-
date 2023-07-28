/* 
 CH-230-A
 a12_p6.h
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Area {
	public:
		Square(const char *n, double a);
		~Square();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double side;
};

#endif
