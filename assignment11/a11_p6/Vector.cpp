/* 
 CH-230-A
 a11_p6.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<iostream>
#include"Vector.h"
#include<cmath>

using namespace std;

Vector::Vector(){
    n=0;
    a=NULL;
}

Vector::Vector(int nn, double *na){
    n=nn;
    a=new double [n];
    for (int i=0; i<n; i++)
        a[i]=na[i];
}
Vector::Vector(const Vector& cpyV){
    n=cpyV.n;
    a=new double [n];
    for (int i=0; i<n; i++)
        a[i]=cpyV.a[i];
}

Vector::~Vector(){
    n=0;
    delete[]a;
}

void Vector::setN(int nn){
    n=nn;
}

void Vector::setA(double *na){
    a=new double [n];
    for (int i=0; i<n; i++)
        a[i]=na[i];
}

int Vector::getN(){
    return n;
}
double* Vector::getA(){
    return a;
}

double Vector::norm(int n,double *a){
    double norm = 0;
    for (int i=0; i<n; i++)
        norm +=a[i]*a[i];
    return sqrt(norm);
}

Vector Vector::sum(Vector other){
    double *sum = new double[n];
    for (int i=0; i<n; i++)
        sum[i]= a[i]+other.a[i];
    return Vector(n, sum);
}

Vector Vector::diff(Vector other){
    double *diff = new double[n];
    for (int i=0; i<n; i++)
        diff[i]= a[i]-other.a[i];
    return Vector(n,diff);
}

double Vector::scalar(Vector other){
    double scalar = 0;
    for (int i=0; i<n; i++)
        scalar += a[i]* other.a[i];
    return scalar;
}

void Vector::print(){
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}