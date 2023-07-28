/* 
 CH-230-A
 a11_p1.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<iostream>
#include"Box.h"

using namespace std;
//setters
void Box::setH(double newH){
    h = newH;
}
void Box::setW(double newW){
    w = newW;
}
void Box::setD(double newD){
    d = newD;
}
//getters
double Box::getH(){
    return h;
}
double Box::getW(){
    return w;
}
double Box::getD(){
    return d;
}
//calling constructors
Box::Box(){
    h=w=d=0;
}
Box::Box(double h, double w, double d){
    h=h;
    w=w;
    d=d;
}
Box::Box(const Box& box){
    h = box.h;
    w = box.w;
    d = box.d;
}
//calling destructor
Box::~Box(){}
//calculating volume
double Box::getVolume(){
    return h*w*d;
}
