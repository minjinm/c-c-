/* 
 CH-230-A
 a11_p4.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include"Creature.h"

using namespace std;

int main(){
    string n;//variable for user input
    //endless loop
    while(1){

        cout<<"Creating an Creature.\n";
        //creatong creature, dynamically allocating
        Creature *c = new Creature;
        c->run();
        //freeing up allocation
        delete c;
        //prompt user to input
        cout<<"What to create?\nwizard\nobject1\nobject2\n"\
        <<"'quit' to exit"<<endl;
        cin>> n;
        //read uesr input and corresponding classes
        if (n=="object1"){
            cout << "creating dragon."<<endl;
            Dragon *a=new Dragon();
            a->run();
            a->fly();
            delete a;
        }

        if(n=="wizard"){
            cout << "\nCreating a Wizard.\n";
            Wizard *w = new Wizard;
            w->run();
            w->hover();
            delete w;
        }

        if(n=="object2"){
            cout << "\ncreating a pigeon."<<endl;
            Pigeon*r = new Pigeon();
            r->run();
            r->eating();
        }
        //if quit is entered, break the loop
        if (n=="quit")
            break;
        cout<<"Another object ";
    }
    return 0;
}