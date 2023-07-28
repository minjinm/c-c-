/* 
 CH-230-A
 a11_p5.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std;
//setter, getter, area, perimeter, constructors, print are all the same
//default constructor
Shape::Shape(){
    name="default name";
    cout<<"default constructor";
}
//constructor with name
Shape::Shape(const string& n) : name(n) {}
//setter
void Shape::setName(string& newname){
    name=newname;
}
//copy constructor
Shape::Shape(const Shape& cS){
    name=cS.name;
    cout<<"copy constructor for Shape is being called";
}
//getter
string Shape::getName(){
    return name;
}
//printing name of shape
void Shape::printName() const {
	cout << name << endl;
}
//the same for all other classes
//default constructor
CenteredShape::CenteredShape(): Shape(){
    x=y=0;
    cout<<"default constructor";
}
//constructor with x and y
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x=nx;
	y=ny;
}
//copy constructor
CenteredShape::CenteredShape(const CenteredShape& cShape) :
Shape(cShape){
    x=cShape.x;
    y=cShape.y;
    cout<<"copy constructor";
}
//setter
void CenteredShape::setX(double newx){
    x=newx;
}

void CenteredShape::setY(double newy){
    y=newy;
}
//getter
double CenteredShape::getX(){
    return x;
}
double CenteredShape::getY(){
    return y;
}

Circle::Circle():CenteredShape(){
    Radius=0;
    cout<<"default constructor";
}

Circle::Circle(const string& n, double nx, double ny, double r) :
CenteredShape(n,nx,ny){
	Radius=r;
}

Circle::Circle(const Circle& cC) :
CenteredShape(cC){
   Radius=cC.Radius;
   cout<<"copy constructor";
}
void Circle::setRadius(double newRad){
    Radius=newRad;
}

double Circle::getRadius(){
    return Radius;
}
//area
double Circle::area(){
    double a;
    a=Radius*Radius*M_PI;
    cout<<"area of circle "<<a<<endl;
    return a;
}
//perimeter
double Circle::perimeter(){
    double p;
    p=2*Radius*M_PI;
    cout<<"perimeter of circle "<<p<<endl;
    return p;
}
RegularPolygon::RegularPolygon():CenteredShape(){
    EdgesNumber=0;
    cout<<"default constructorled\n";
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl):
CenteredShape(n,nx,ny){
	EdgesNumber=nl;
}

RegularPolygon::RegularPolygon(const RegularPolygon& cRP) :
CenteredShape(cRP){
   EdgesNumber=cRP.EdgesNumber;
   cout<<"copy constructor";
}


void RegularPolygon::setEN(int newEN){
    EdgesNumber=newEN;
}

int RegularPolygon::getEN(){
    return EdgesNumber;
}

Rectangle::Rectangle():RegularPolygon(){
    height=0;
    width=0;
    cout<<"default constructor";
}

Rectangle::Rectangle(const string& n,double nx,double ny,\
double nwidth, double nheight) : RegularPolygon(n,nx,ny,4){
	width=nwidth;
	height=nheight;
}

Rectangle::Rectangle(const Rectangle& cR) :
RegularPolygon(cR){
   width=cR.width;
   height=cR.height;
   cout<<"copy constructor";
}

void Rectangle::setwidth(double nwidth){
    width=nwidth;
}

void Rectangle::setheight(double nheight){
    height=nheight;
}

double Rectangle::getwidth(){
    return width;
}

double Rectangle::getheight(){
    return height;
}
double Rectangle::perimeter(){
    double p= 2*(height+width);
    cout<<"perimeter of rectangle="<<p<<endl;
    return p;
}
double Rectangle::area(){
    double a=width*height;
    cout<<"area of rectangle="<<a<<endl;
    return a;
}

Square::Square():Rectangle(){
    side=0;
    cout<<"default constructor";
}

Square::Square(const string& n,double nx,double ny,\
double nside) : Rectangle(n,nx,ny,0,0){
	side=nside;
	cout<<"side of square ="<<side<<endl;
}

Square::Square(const Square& cS) :
Rectangle(cS){
   side=cS.side;
   cout<<"copy constructor";
}

void Square::setside(double nside){
    side=nside;
}

double Square::getside(){
    return side;
}

double Square::perimeter(){
    double p= 4*side;
    cout<<"perimeter of square ="<<p<<endl;
    return p;
}
double Square::area(){
    double a=side*side;
    cout<<"area of square ="<<a<<endl;
    return a;
}

