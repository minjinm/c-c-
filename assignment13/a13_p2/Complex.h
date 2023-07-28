/* 
 CH-230-A
 a13_p2.h
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include<string>
using namespace std;

class Complex {

    private:

        double real;
        double im;
    
    public:

        void setReal(double real);
        void setIm(double newim);

        double getReal();
        double getImag();

        //default constructor
        Complex();
        Complex(double newreal, double newim);
        //copy constructor
        Complex(const Complex&);

        Complex conjugate();

        //overload + - * = operators
        Complex operator +(Complex);
        Complex operator -(Complex);
        Complex operator *(Complex);
        Complex operator =(Complex);

        double magnitude();
        void print();

        friend ostream& operator <<(ostream&, Complex&);
        friend istream& operator >>(istream&, Complex&);
};