/* 
 CH-230-A
 a10_p6.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <string> // defines standard C++ string class

using namespace std;

/* First C++ class */
class Critter{   
    // data members are private
    private:  
	string name;
	double hunger;
	int boredom;
	double height;
	double thirst;
    public:
    void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(int newheight);
	// 4 constructors with different parameters
    Critter();
    Critter(string);
    Critter(string, int, int, double);
    Critter(string, int, int, double, double);
	void print();
};

