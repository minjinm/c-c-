/* 
 CH-230-A
 a9_p4.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<iostream>
#include<cstring>

using namespace std;

//calculate difference
int mycount(int a, int b){
    int x=b-a;
    return x;
}

//calculate number of characters
int mycount(char ch, std::string s){
    int count=0;
    for(unsigned int i=0; i<s.length(); i++)
        if(s[i] ==ch)
            count++;
    return count;
}

int main(){

    int a,b;
    char ch;
    string s;

    cin>>a;
    cin>>b;
    cin>>ch;
    //ignore backlash n
    cin.ignore();
    cin>>s;

    cout<<mycount(a,b)<<endl;
    cout<<mycount(ch,s)<<endl;

    return 0;
}


