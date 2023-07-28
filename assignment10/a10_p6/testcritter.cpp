/* 
 CH-230-A
 a10_p6.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include "Crittter.h"

using namespace std;

int main(){

    Critter c;
	string name;
	int hunger;
	int boredom;
	double height;
	double thirst;

    //ask user for inputs
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	getline(cin, name);

	cout << "Hunger: ";
	cin >> hunger;
    c.setHunger(hunger);

	cout << "Boredom level: ";
	cin >> boredom;
    c.setBoredom(boredom);

	cout << "height: ";
	cin >> height;
    c.setHeight(height);

	cout <<"thirst: ";
	cin >> thirst;
    //call for constructors and display
    Critter c1;
    c1.print();
    Critter c2(name);
    c2.print();
    Critter c3(name, hunger, boredom, height);
    c3.print();
    Critter c4(name, hunger, boredom, height, thirst);
    c4.print();
    //call for constructors and display
        return 0;
}