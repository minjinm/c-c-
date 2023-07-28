/* 
 CH-230-A
 a11_p3.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<iostream>
#include"Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  


Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//creating a new class



Dragon::Dragon() : wings(2){}

void Dragon:: fly() const{
    cout<<"flying with "<<wings<<" wings"<<endl;
}



Pigeon::Pigeon() : seeds(45678){}

void Pigeon:: eating() const{
    cout<<"eating "<<seeds<<" seeds"<<endl;
}