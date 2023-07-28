/* 
 CH-230-A
 a12_p2.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include<iostream>
#include<string>
#include"TournamentMember.h"

using namespace std;


int main(){

    //default
    //TournamentMember t1, t2, t3;
    
    TournamentMember t1("aaa", "AA", "1995-12-11", 25, 44);
    TournamentMember t2("bbb", "BB", "1990-03-11", 26, 48);
    TournamentMember t3("ccc", "CC", "1995-04-03", 34, 45);

    cout<<"Location: "<<endl;
    t1.setLocation("Germany");
    t2.setLocation("Germany");
    t3.setLocation("Germany");

    //display
    t1.print();
    t2.print();
    t3.print();

    return 0;
}