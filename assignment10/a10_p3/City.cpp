/* 
 CH-230-A
 a10_p3.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

//setting name
void City::setName(string& newname) {
	name = newname;
}
//setting inhabitants
void City::setInhabitants(int newinhabitants) {
	inhabitants = newinhabitants;
}
//setting mayor
void City::setMayor (string& newmayor){
    mayor = newmayor;
}
//setting area
void City::setArea(double newarea){
    area = newarea;
}
void City::print() {
    cout << "The city is: " << name << "." << "Its " << area << "km^2"
    << "Its mayor is: " << mayor << "." << "It has: " << inhabitants
    << "people." << endl;
}