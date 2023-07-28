/* 
 CH-230-A
 a13_p1.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    
    string input,output,buffer;
    getline(cin,input);

//read
    ifstream in(input); 
    if (!in.is_open()){
        cerr<<"file1 error"<<endl;
        exit(1);
    }
//to check
    output = input.insert(input.find('.'),"_copy");
    cout<<output<<endl;

//write
    ofstream out(output);
    if (!out.good()) {
        cerr<<"file2 error"<<endl;
        exit(1);
    }
    while(!in.eof()){
        getline(in, buffer);
        out<<buffer;
    }
}