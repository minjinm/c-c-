/* 
 CH-230-A
 a13_p2.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include<iostream>
#include"Complex.h"
#include<cmath>

using namespace std;

//definitions

//setters
void Complex::setReal(double newreal){
    real=newreal;
}

void Complex::setIm(double newim){
    real=newim;
}

double Complex::getReal(){
    return real;

}

double Complex::getImag(){
    return im;
}

Complex::Complex(){
    real = im = 0;
    cout<<"Default constructor is being called"<<endl;
}

Complex::Complex(double r, double i){
    real=r;
    im=i;
    cout<<"Constructor for setting the properties with specific values"<<endl;
}

Complex::Complex(const Complex& cpy){
    
    real=cpy.real;
    im=cpy.im;

}

//conjugate

Complex Complex::conjugate(){

    Complex res;
    res.real=real;
    res.im=(-1)*im;

    return res;

}

//overload + operator

Complex Complex::operator +(Complex c2){
    
    Complex res;
    res.real = c2.real + real;
    res.im = c2.im + im;

    return res;

}

//overload - operator

Complex Complex::operator -(Complex c2){
    
    Complex res;
    res.real = real - c2.real;
    res.im = im - c2.im;

    return res;
}

//overload * operator

Complex Complex::operator *(Complex c2){

    Complex res;
    res.real = real*(c2.real) - im*(c2.im);
    res.im = im*(c2.real) + real*(c2.im);

    return res;
}

//overload = operator

Complex Complex::operator =(Complex c2){

    real = c2.real;
    im = c2.im;

    return *this;
}


double Complex::magnitude(){
    return sqrt(real*real + im*im);
}
void Complex::print(){
    if(im){
        cout<<noshowpos<<real<<showpos<<im<<"i"<<endl;
    }
    else{
        cout<<noshowpos<<real<<showpos<<endl;
    }
}

//overload cout operator
ostream& operator << (ostream& output, Complex& co){
    if (co.im){
        output<<noshowpos<<co.real<<showpos<<co.im<<'i'<<endl;
    }
    else{
        output<<noshowpos<<co.real<<noshowpos<<endl;
    }

    return output;
}

//overload cin operator
istream& operator >> (istream& input, Complex& co){
    input>>co.real>>co.im;
    return input;
}