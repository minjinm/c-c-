/* 
 CH-230-A
 a9_p3.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<iostream>
using namespace std;

//abs function
float abso(float a);

int main(){

    float a;
    cin >> a;
    //call function
    cout << abs(a);

    return 0;
}

float abso(float a){
//if it's negative, mulitply by -1
    if(a<0)
        a = (-1)*a;
    return a;
}


