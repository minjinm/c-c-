/* 
 CH-230-A
 a12_p2.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
//class definition

#include<iostream>
#include<string>
#include<cmath>
#include"TournamentMember.h"

using namespace std;

//default contructor

TournamentMember::TournamentMember(){

    strcpy(name, "default firstname");
    strcpy(surname, "default surname");
    strcpy(dob, "default dob");
    age=height=0;
    cout<<"default constructor for the class\n";

}

//parametric constructor

TournamentMember::TournamentMember(const char* nm, const char* sn, 
                                   const char* dob1, int h, int a){
    
    strcpy(name, nm);
    strcpy(surname, sn);
    strcpy(dob, dob1);
    height = h;
    age = a; 
    cout<<"parametric constructor for the class\n";

}

//Copy Constructor.
TournamentMember::TournamentMember(const TournamentMember& tmem){

    name[36]=tmem.name[36];
    surname[36]=tmem.surname[36];
    dob[11]=tmem.dob[11];
    height = tmem.height; 
    age = tmem.age;
    cout << "copy constructor for the class\n";

}


//print

void TournamentMember::print(){
 
	cout << "\nFirst name: " << name << endl << "Surname: " << surname 
    << "\nDate of Birth: " << dob <<"\nLocation: " << location
    << "\nHeight: " << height <<"\nAge: " << age 
    << endl;

}
//destructor
TournamentMember::~TournamentMember(){
	cout << "destructor for the class\n";
}