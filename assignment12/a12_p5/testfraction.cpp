/* 
 CH-230-A
 a12_p4.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

int main(void){

	Fraction a(4, 2);
	Fraction b(17, 11);
	Fraction c(5);
	Fraction q,w,e,r,t,y, z,x,n,m;

	a.print();
	b.print();
	c.print();

	cout<<"After overloading \n";
	cin>>q;
	cout<<q<<endl;
	cin>>w;
	cout<<w<<endl;

	z=q*w;
	x=q/w;
	cout<<"("<<q<<")*("<<w<<")="<<z<<endl;
	cout<<"("<<q<<")/("<<w<<")="<<x<<endl;
	n=q+w;
	m=q-w;
	cout<<"("<<q<<")+("<<w<<")="<<n<<endl;
	cout<<"("<<q<<")-("<<w<<")="<<m<<endl;

	cout<<"("<<q<<")<("<<w<<")="<<y<<endl;
	q<w;

	cout<<"("<<q<<")>("<<w<<")="<<t<<endl;
	q>w;

	return 0;

}