/* 
 CH-230-A
 a13_p6.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    //adding 8x20 times to v.
    for(int i = 0; i < 20; i++)
        v.push_back(8);

    try{
        //try to access 21st position's value
        v.at(21);
    } catch(const out_of_range& oor){
        //catch the error and print it
        cerr<<"Out of Range error: "<<oor.what()<<endl;
    }
}