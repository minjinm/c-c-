/* 
 CH-230-A
 a9_p5.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
int main () {

    int a;
    int n;
    int randomNumber;
    string s;
    //ask name and read 
    cout<<"Enter name:"<<endl;
    cin>>s;
    cout<<"Guess the number:"<<endl;
    //read number
    cin>>n;
    // init random number generator
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand();
    //make random number within 100
    a = (randomNumber%100) +1;

    while (n != a) {
    //for numbers that differ
        if(n<a){
            cout<<"Too low"<<endl;
            cout<<"Enter again:"<<endl;
            cin>>n;
        }
        else{
            cout<<"Too high"<<endl;
            cout<<"Enter again:"<<endl;
            cin>>n;
        }
        if(n == a)
            cout<<"Correct!"<<endl;
}
return 0;
}
