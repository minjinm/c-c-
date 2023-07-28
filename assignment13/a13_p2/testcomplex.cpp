/* 
 CH-230-A
 a13_p2.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include<iostream>
#include"Complex.h"
#include <fstream>

using namespace std;

int main(){
    Complex c1, c2;

    //input files
    ifstream in1("in1.txt");
    if(!in1.is_open()){
        cout<<"in1.txt file error"<<endl;
        in1.close();
        exit(1);
    }
    ifstream in2("in2.txt");
    if(!in2.is_open()){
        cout<<"in2.txt file error"<<endl;
        in1.close();
        exit(1);
    }

    //output file
    ofstream out("output.txt");
    if (!out.good()) {
        cerr<<"output.txt file error"<<endl;
        out.close();
        exit(1);
    }

    //read c1, c2
    in1>>c1;
    in2>>c2;

    //print sum difference and product
    Complex number;

    number = c1 + c2;
    out<<"Sum of the two instances: "<<number<<endl;

    number = c1 - c2;
    out<<"Difference:"<<number<<endl;

    number = c1 * c2;
    out<<"Product:"<<number<<endl;

    //closing files
    in1.close();
    in2.close();
    out.close();

    return 0;
}