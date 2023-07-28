/* 
 CH-230-A
 a11_p3.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include"Creature.h"

using namespace std;

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

//creating a new class 

    cout << "\nCreating a Dragon.\n";
    Dragon a;
    a.run();
    a.fly();

    cout << "\nCreating a Pigeon.\n";
    Pigeon b;
    b.run();
    b.eating();

    return 0;
} 