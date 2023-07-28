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
	void print();				// prints it to the screen

	//use <<
	friend ostream& operator<<(ostream&, Fraction&);

	//use >>
	friend istream& operator>>(istream&, Fraction&);

	Fraction operator *(Fraction p){
		Fraction result;
		result.num = num * p.num;
		result.den = den * p.den;
		return result;
	}

	// '/'
	Fraction operator /(Fraction q){
		Fraction result;
		result.num = num * q.den;
		result.den = den * q.num;
		return result;
	}
};

#endif /* FRACTION_H_ */