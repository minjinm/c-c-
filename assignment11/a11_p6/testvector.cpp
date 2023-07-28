/* 
 CH-230-A
 a11_p6.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include"Vector.h"
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"size of vectors:";
    cin>>n;
    cout<<"Vector 1:\n";
    double *a;
    a= new double[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Vector 2:\n";
    double *b;
    b= new double[n];
    for (int i=0;i<n;i++)
        cin>>b[i];
        
    Vector v1(n,a);
    Vector v2(n,b);
    Vector vc(v1);
    Vector vd;

    Vector add=v1.sum(v2);
    Vector substract=v1.diff(v2);
    cout <<"vector 1 = ";
    v1.print();

    cout <<"vector 2 = ";
    v2.print();

    cout <<"norm of vector 1 = " << v1.norm(n,a)<<endl;

    cout <<"sum of vectors = ";
    add.print();

    cout <<"diff of vectors = ";
    substract.print();
    cout <<"scalar product of 2 vector = " << v1.scalar(v2) <<endl;

}