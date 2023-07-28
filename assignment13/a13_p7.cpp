/* 
 CH-230-A
 a13_p7.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include <exception>
using namespace std;

class OwnException : public exception{
    public:
        const char* msg;
        //parametric constructor to set message.
        OwnException(const char* nmsg){
            msg = nmsg;
        }

        //overwrite what() function
        const char* what() const throw(){
            return "OwnException\n";
        }

};

//function to throw errors
void function(int p){
    if(p == 1)
        throw 'a';
    else if(p == 2)
        throw 12;
    else if(p == 3)
        throw true;
    else
        throw OwnException("Default case exception");
}

//Trying all different scenarios and catching all of them.
int main(){

    //parameter 1 exception
    try{
        function(1);
    } catch(char c){
        cerr<<"Caught in main: "<<c<<endl;
    }

    //parameter 2 exception
    try{
        function(2);
    } catch(int a){
        cerr<<"Caught in main: "<<a<<endl;
    }

    //parameter 3 exception
    try{
        function(3);
    } catch(bool b){
        cerr<<"Caught in main: "<<b<<endl;
    }

    //default exception
    try{
        function(4);
    } catch(OwnException& def){
        cerr<<"Caught in main: "<<def.what()<<endl;
        cerr<<def.msg<<endl;
    }
}