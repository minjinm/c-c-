/* 
 CH-230-A
 a10_p8.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <string>

class Complex{

private:
	float r1;
    float i1;

public: //setters
    void setreal(int real);
    void seti1(int image);

    //getters
    float getr1();
    float geti1();

    Complex conjugate();

	//default
	Complex();
	//with properties with specific value
	Complex(float, float=0);
	//copy constructor
	Complex(const Complex&);
	double magnitude();
	void print();
};