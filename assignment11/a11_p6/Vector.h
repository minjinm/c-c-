/* 
 CH-230-A
 a11_p6.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<string>

class Vector{
private:
    int n;
    double *a;
public:
//default
    Vector();
//parametric
    Vector(int, double *);
//copy
    Vector(const Vector&);
//destructor
    ~Vector();
    void setN(int nn);
    void setA(double *a);
    int getN();
    double* getA();
    double norm(int n,double *a);
    double scalar(Vector other);
    Vector sum(Vector other);
    Vector diff(Vector other);
    void print();
};