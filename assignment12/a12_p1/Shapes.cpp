/* 
 CH-230-A
 a12_p1.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include<cmath>

using namespace std;

Shape::Shape(const string& n) : name(n) {
}
Shape::Shape(const Shape& cpyS) : name(cpyS.name)
{}
void Shape::printName() const {
	cout << name << endl;
}

//parametric constructor

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}

//copy constructor
CenteredShape::CenteredShape(const CenteredShape& cpyCS):
    Shape(cpyCS){
    x=cpyCS.x;
    y=cpyCS.y;
    cout<<"Copy constructor for CenteredShape class\n";
}

RegularPolygon::RegularPolygon (const RegularPolygon& cpyRP):
    CenteredShape(cpyRP){
    EdgesNumber=cpyRP.EdgesNumber;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny){
	Radius = r;
}

Hexagon::Hexagon(const string& n,double nx,double ny,
    int nl,double nside, const string&ncolour) : RegularPolygon(n, nx, ny, nl){
    side =nside;
    colour=ncolour;
    cout<<"The "<<colour<<" Hexagon has "<<side<<" sides\n";
}

Hexagon::Hexagon(const Hexagon& cpyH): RegularPolygon(cpyH){
    side=cpyH.side;
    colour=cpyH.colour;
    cout<<"Call copy constructor"<<endl;
}

void Hexagon::setSide(double nside){
    side=nside;
}
void Hexagon::setColour(const std::string ncolour){
    colour=ncolour;
}
double Hexagon::getSide(){
    return side;
}
string Hexagon::getColour(){
    return colour;
}

//area for hexagon

double Hexagon::area(){

    double area;
	area = (((3*sqrt(3))/2)*pow(side,2));
	return area;
}
//perimeter for hexagon 

double Hexagon::perimeter(){

    double peri=side*6;
    return peri;
    
}

//destructor

Hexagon::~Hexagon(){
    cout<<"Destructor for hexagon class\n";
}