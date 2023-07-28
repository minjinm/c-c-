/* 
 CH-230-A
 a10_p5.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <string> // defines standard C++ string class
using namespace std;

/* First C++ class */
class Critter
{
private:  // data members are private

	string name;
	int hunger;
	int boredom;
	double height;


public: // business logic methods are public
	// setter methods
    Critter();
    Critter(string newname);
    Critter(string newname, int newhunger,int newboredom, double newheight=10);
    //default is 10
	void print();
};
