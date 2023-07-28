/* 
 CH-230-A
 a10_p2.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setLegs(int newlegs) {
	legs = newlegs;
}

void Critter::setFur(int newfur) {
	fur = newfur;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger
	<< ". Number of legs I have is: " << legs 
	<< ". My fur thickness is: " << fur << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}
int Critter::getLegs() {
	return legs;
}
int Critter::getFur() {
	return fur;
}