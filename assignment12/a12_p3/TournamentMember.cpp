/* 
 CH-230-A
 a12_p3.cpp
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
    cout<<"default constructor for tournament class\n";

}

//parametric constructor

TournamentMember::TournamentMember(const char* nm, const char* sn, 
                                   const char* dob1, int h, int a){
    
    strcpy(name, nm);
    strcpy(surname, sn);
    strcpy(dob, dob1);
    height = h;
    age = a; 
    cout<<"parametric constructor for tournament class\n";

}

//Copy Constructor.
TournamentMember::TournamentMember(const TournamentMember& tmem){

    name[36]=tmem.name[36];
    surname[36]=tmem.surname[36];
    dob[11]=tmem.dob[11];
    height = tmem.height; 
    age = tmem.age;
    cout << "copy constructor for tournament class\n";

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
	cout << "destructor for tournament class\n";
}

//default constructor
Player::Player(){
    number=0;
    pos=" ";
    goals=0;
    foot=" ";
    cout<<"default constructor for player class\n";
}

//parametric constructor

Player::Player(const char* nm, const char* sn, 
            const char* dob1, int h, int a, int n, string p, int g, string f){
               TournamentMember(nm, sn, dob1, h, a);

    number = n;
    pos = p;
    goals = g; 
    foot = f;
	cout << "parametric constructor for the player class\n";

}

Player::Player(const Player& play){

    number=play.number;
    pos=play.pos;
    goals=play.goals;
    foot=play.foot;
    cout<<"copy constructor for players called\n";

}

void Player::Goals(int goal1){
    goals = goal1 +1;
}

void Player::printPlayer(){
    cout << "number: " << number << "position: "<<pos
    <<"\nnumber of goal: "<<goals<< \
    "\nfeet side: "<<foot<<"\n";
}

Player::~Player(){
    cout<<"destructor for player called\n";
}