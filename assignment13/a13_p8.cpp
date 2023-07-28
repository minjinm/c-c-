/* 
 CH-230-A
 a13_p8.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include <exception>
using namespace std;


class Motor{
    public:
        Motor(){
            //throw exception
            throw "This motor has problems";
        }
        ~Motor(){}

};


//Car inherit Motor
class Car{
    private:
        Motor *m;
    public:
        Car(){
            try {
                //instantiate Motor m
                m = new Motor();
            } catch(const char* err){
                //print motor message
                cerr<<err<<endl;
                throw "This car has problem with the motor";
            }
        }
        ~Car(){}

};


class Garage{
    private:
        Car *c;
    public:
        Garage(){
            try {
                //instantiate Car c
                c = new Car();
            } catch(const char* err){
                //print car error message
                // cerr<<err<<endl;
                throw "The car in this garage has problems with the motor";
            }
        }
        ~Garage(){}
};


int main(){

    try{
        //try to instantiate garage
        Garage ga;
    } catch(const char* err){
        //print garage error message
        cerr<<err<<endl;
    }

    return 0;
    
}