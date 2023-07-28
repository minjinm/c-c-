/* 
 CH-230-A
 a10_p6.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include "Crittter.h"

using namespace std;

//default constructor
Critter::Critter()
{
    name="default_critter";
	hunger=9.5;
	boredom=9.6;
	height=9.8;
	thirst = hunger;
	cout <<"Call constructor 1"<<endl;
}
//constructor 2 (thirst = hunger in double)
Critter::Critter(string newname)
{
    name = newname;
	hunger = 345678;
	boredom = 9876;
	height = 578;
	thirst = hunger;
    cout << "Call constructor 2"<<endl;
}
//constructor 3 (thirst = hunger in double)
Critter::Critter(string newname, int newhunger,int newboredom,double newheight)
{
    name = newname;
	hunger = newhunger;
	boredom = newboredom;
	height = newheight;
	thirst = hunger;
	cout << "Call constructor 3"<<endl;
}
//constructor 4
Critter::Critter(string newname, int newhunger, int newboredom, double newheight, 
double newthirst)
{
    name = newname;
	hunger = newhunger;
	boredom = newboredom;
	height = newheight;
	thirst = newthirst;
	cout << "Call constructor 4"<<endl;
}
void Critter::print() {

    cout << "My name is " << name << ". My height is: " << height
    << ". My boredom is: " << boredom
    << ". My hunger is: "<<hunger<<"."
    << "My thirst is: "<< thirst << endl;

}
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom) {
	boredom = newboredom;
}

void Critter::setHeight(int newheight) {
	height = newheight;
}

