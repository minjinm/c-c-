/* 
 CH-230-A
 a11_p5.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include "Shapes.h"

int main(int argc, char** argv) {

    Circle c("first circle", 3, 4, 7);
    RegularPolygon r("TRIANGLE", 3, 1, 3);
    c.area();
    c.perimeter();
    c.printName();

    Rectangle x("RECTANGLE",5,1,3,2);
    x.area();
    x.perimeter();
    x.printName();

    Square s("SQUARE",2,2,4);
    s.area();
    s.perimeter();
    s.printName();
    r.printName();
}