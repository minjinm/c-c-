/* 
 CH-230-A
 a13_p4.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

//added virtual keyword before public
class B:  virtual public A
{
public:
  B()  { setX(10); }
};

//added virtual keyword before public
class C:  virtual public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
//line below calls constructor of D
//which would call both B and C's constructor
//each call A's constructor, creating conflict 
    D d;
    d.print();
    return 0;
}