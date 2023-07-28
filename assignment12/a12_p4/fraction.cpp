/* 
 CH-230-A
 a12_p4.cpp	
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include <iostream>
#include"fraction.h"

using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	cout << num << "/" << den << endl;
}

ostream& operator << (ostream &out, Fraction &f1)
{	
	out << f1.num << "/" << f1.den << endl;
	return out;
}


istream& operator >> (istream &in, Fraction &f2)
{
	/*
	in >> f2.num >> f2.den;
	while(1){
		if((f2.den != 0))
			break;
		else{
			cout << "error\n"<<"re-enter\n";
            in >> f2.num >> f2.den;
		}
	}
	*/
	in >> f2.num >> f2.den;
	return in;
}
