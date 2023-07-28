/* 
 CH-230-A
 a10_p2.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int legs;
	int fur;
	
public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setLegs(int newlegs);
	void setFur(int newfur);
	// getter method
	int getHunger();
	int getLegs();
	int getFur();
	// service method
	void print();
};