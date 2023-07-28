/* 
 CH-230-A
 a10_p4.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(){
    
    //call every constructor and display each
    Critter c1;
    c1.print();
    Critter c2("A");
    c2.print();
    Critter c3("B", 3, 8, 9);
    c3.print();
    //call for third constructor without height
    Critter c4("C", 6, 9);
    c4.print();
    return 0;
}