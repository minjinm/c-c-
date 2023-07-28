/* 
 CH-230-A
 a10_p2.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(){

	Critter c;

	string name;
	int hunger;
	int legs, fur;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "Legs: ";
	cin >> legs;
	c.setLegs(legs);
	
	cout << "Fur: ";
	cin >> fur;
	c.setFur(fur);

	cout << "how many legs: ";
	cin >> legs;
	c.setLegs(legs);

	cout <<"You have created:"<< endl;
	c.print();
    
	return 0;
}