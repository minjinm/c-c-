/* 
 CH-230-A
 a11_p1.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include "Box.h"
using namespace std;

int main(){

    Box *list;
    int n;
//input number of boxes
    cout<<"Enter box numbers:"<<endl;
    cin>>n;
    cin.get();
//array of 2*n boxes
    list = new Box[2*n];
    double h,w,d;
//ask user for inputs
    for (int i=0; i<n; i++){

        cout<<"Box number: "<<i+1<<endl;

		cout<<"Height of box: ";
        cin>>h;
		list[i].setH(h);

        cout<<"Weight of box: ";
        cin>>w;
		list[i].setW(w);

		cout<<"Depth of box: ";
        cin>>d;
        list[i].setD(d);
    }

//constructor
    for(int i=n; i<2*n; i++)
        list[i] = Box(list[i-n]);

//find volume
    for (int i=0; i<2*n; i++)
        cout<<"Volume:"<<list[i].getVolume()<<endl;
}