/* 
 CH-230-A
 a10_p5.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//default constructor
Critter::Critter()
{
    name="default_critter";
	hunger=534;
	boredom=647;
	height=346;
	cout <<"Call constructor 1:"<<endl;
}
//Second constructor
Critter::Critter(string newname)
{
    name = newname;
	hunger = 264;
	boredom = 658;
	height = 543;
    cout <<"Call constructor 2:"<<endl;
}

//Third constructor
Critter::Critter(string newname, int newhunger,int newboredom,double newheight)
{
    name = newname;
	hunger = newhunger;
	boredom = newboredom;
	height = newheight;
	cout <<"Call constructor 3:"<<endl;
}

//display critter
void Critter::print() {

    cout << "My name is" << name << ". My height is: " << height
    << ". My boredom is: " << boredom
    << ". My hunger is: "<<hunger<<"."<<endl;
	
}

