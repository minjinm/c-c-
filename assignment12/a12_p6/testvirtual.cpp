/* 
 CH-230-A
 a12_p6.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1)object pointer array list of type area
	int index = 0;								// (2)initialize index to 0
	double sum_area = 0.0;						// (3)assign default value
	double sum_perimeter = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)calling ring constructor
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square yellow_square("YELLOW", 13);
	list[0] = &blue_ring;						// (5)put reference value in the 
	//first position of the array
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &yellow_square;
	while (index < num_obj) {					// (7)while loop for
	//checking all objects in array
		(list[index])->getColor();				
		double area = list[index++]->calcArea();// (8)assign area in 
		//each position of the array
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)displays the areas

	while (index < num_obj) {				
		(list[index])->getColor();				
		double perimeter = list[index++]->calcPerimeter();
		sum_perimeter += perimeter;
	}
	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;		
	return 0;
}
