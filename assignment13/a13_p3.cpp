/* 
 CH-230-A
 a13_p3.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){

    int n;
    string name;
    ifstream in;
    ofstream out;
    string line;
    
    cout<<"Number of files to open: ";
    cin>>n;


    //open output file
    out.open("concatn.txt", ios::binary | ios::out);
    if(!out){
        cout<<"output file error"<<endl;
        out.close();
        exit(1);
    }

    for(int i = 0; i < n; i++){
        cin>>name;

        //open input file
        in.open(name, ios::binary | ios::in);
        if(!in){
            cout<<"input file error"<<endl;
            in.close();
            exit(1);
        }
        
        int size;
        char buf[100];

        in.seekg(0, ios::end);
        size = (int)in.tellg();
        in.seekg(0, ios::beg);

        //read from in and write to out
        for(int i = 0; i < size; i++){
            in.read(buf, size);
            out.write(buf, in.gcount());
        }  
        out<<endl;

        //close input file
        in.close();
    }
    //close output file
    out.close();
}