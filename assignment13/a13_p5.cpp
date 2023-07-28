/* 
 CH-230-A
 a13_p5.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
//add default constructor
  A(){x=0;}
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
};
 
int main()
{
//line below calls default constructor of D, which calls default constructor of A
//so we need to implement the default constructor of A
    D d;
    d.print();
    return 0;
}