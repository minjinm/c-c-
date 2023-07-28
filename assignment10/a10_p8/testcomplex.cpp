/* 
 CH-230-A
 a10_p8.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main() {

	float r1, i1;

    cout<<"Enter the real value: ";
    cin>>r1;
    cout<<"Enter the complex value: ";
    cin>>i1;

	Complex c1;
	c1.print();

	Complex c2(r1, i1);
	cout<<"Conjugate of second constructor is:";
	c2.print();

	Complex c3;
	c3=c2.conjugate();
	c3.print();
	cout<<c2.magnitude()<<endl;

	return 0;
}