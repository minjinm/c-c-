/* 
 CH-230-A
 a12_p4.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

int main(void)
{
	Fraction a(4, 2);
	Fraction b(17, 11);
	Fraction c(5);

	Fraction multiplication, division;

	while(1){
		std::cout<<"First fraction: \n";
		if (cin>>a)
        	break;
		else
        	std::cout<<"Enter integer:\n";
	}

	while(1){
		std::cout<<"Second fraction: \n";
		if (cin >> b)
        	break;
		else
        	std::cout<<"Integer: \n";

    	}

	std::cout <<"\nFirst fraction: "<<a;
	std::cout <<"\nSecond fraction: "<<b;

	multiplication=a*b;
	division=a/b;

//display results
	std::cout<<"\nmultiplication: "<<multiplication;
	std::cout<<"\ndivision: "<< division;

	return 0;

}