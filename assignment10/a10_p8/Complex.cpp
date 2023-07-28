/* 
 CH-230-A
 a10_p8.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
#include <cmath>

using namespace std;

//setters
void Complex::setreal(int real){
    r1=real;
}
void Complex::seti1(int image){
    i1=image;
}
//default constructor initializing the properties by 0
Complex::Complex(){
	r1=0;
    i1=0;
	cout<<"Call contructor 1"<<endl;
}
//constructor for setting the properties with specific values
Complex::Complex(float r, float i){
	r1=r;
	i1=i;
	cout<<"Call constructor 2"<<endl;
}
//copy constructor
Complex::Complex(const Complex& randname){
    r1=randname.r1;
    i1=randname.i1;
}
//conjugate
Complex Complex::conjugate(){
    cout<<"Calling conjugate"<<endl;
    Complex comp;
    comp.r1=r1;
    comp.i1=-i1;
	return comp;
}
double Complex::magnitude(){
	return sqrt(pow(r1,2)+pow(i1,2));
}
void Complex::print(){
	if(i1)
		cout<<r1<<i1<<'i'<<endl;
	else
		cout<<r1<<endl;
}