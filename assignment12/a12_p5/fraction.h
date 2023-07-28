/* 
 CH-230-A
 a12_p4.h
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
// simple class for fractions

using namespace std;

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1

	friend ostream & operator << (ostream &output, Fraction &f);
    friend istream & operator >> (istream &input, Fraction &f );
    Fraction operator*(Fraction f);
    Fraction operator/(Fraction f);
    Fraction operator+(Fraction f);
    Fraction operator-(Fraction f1);
    Fraction& operator=(Fraction f);
    bool operator<(Fraction &f);
    bool operator>(Fraction &f);

    void print();				// prints it to the screen
};

#endif /* FRACTION_H_ */