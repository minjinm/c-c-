/* 
 CH-230-A
 a11_p5.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
//prototyping functions and methods
class Shape {			
	private:   				
		std::string name;   
	public:
	    void setName(std::string& newname);
	    std::string getName();

	    Shape();			
		Shape(const std::string&);  
		Shape(const Shape&);		
		void printName() const ;  	
};

class CenteredShape : public Shape {  
	private:
		double x,y;  
	public:
        //setters and getters when needed
	    void setX(double newx);
	    void setY(double newy);
	    double getX();
	    double getY();
        //default, copy constructors
	    CenteredShape();
		CenteredShape(const std::string&, double, double);  
		CenteredShape(const CenteredShape&);
		void move(double, double);	
};
//circle inheriting from CenteredShape class
class Circle : public CenteredShape {  
	private:
		double Radius;
	public:
	    void setRadius(double newRad);
	    double getRadius();
	    Circle();
		Circle(const std::string&, double, double, double);
		Circle(const Circle&);
        //perimeters and area functions when needed
        double perimeter();
        double area();

};

class RegularPolygon : public CenteredShape { 
	private:
		int EdgesNumber;
	public:
	    void setEN(int newEN);
	    int getEN();

	    RegularPolygon();
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon(const RegularPolygon&);
};

class Rectangle : public RegularPolygon{
private:
    double width;
    double height;
public:
    void setwidth(double nwidth);
    void setheight(double nheight);
    double getwidth();
    double getheight();
    double perimeter();
    double area();
    Rectangle();
    Rectangle(const std::string&,double, double, double, double);
    Rectangle(const Rectangle&);
};

class Square : public Rectangle{
private:
    double side;
public:
    void setside(double newside);
    double getside();
    double perimeter();
    double area();
    Square();
    Square(const std::string&, double, double, double);
    Square(const Square&);
};

void print();
#endif