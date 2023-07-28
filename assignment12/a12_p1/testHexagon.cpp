/* 
 CH-230-A
 a12_p1.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

using namespace std;

int main(){
    
    Hexagon h1("Hexagon1",2,1,5,9,"blue");
    Hexagon h2("Hexagon2",1,2,11,15,"green");
    Hexagon hc = Hexagon(h2);

    cout<<"Area of Hexagon1: "<<h1.area()<<endl;
    cout<<"Area of Hexagon2: "<<h2.area()<<endl;
    cout<<"Area of copies Hexagon "<<hc.area()<<endl;

    cout<<"Perimeter of Hexagon1: "<<h1.perimeter()<<endl;
    cout<<"Perimeter of Hexagon2:  "<<h2.perimeter()<<endl;
    cout<<"Perimeter of copied Hexagon:  "<<hc.perimeter()<<endl;

}