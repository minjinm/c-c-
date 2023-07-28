/* 
 CH-230-A
 a10_p3.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"
using namespace std;

int main(){

	City a;
	City b;
	City c;
    //declare instances
	string name;
	int inhabitants;
	std::string mayor;
	double area;

    City arr[3]={a,b,c};
    //declare list
    for(int i=0; i<3; i++){

        cout << endl << "Enter information: "<<endl;
        cout << "City name: ";
        getline(cin, name);
        //call function
        arr[i].setName(name);

        cout << "Inhabitants: ";
        cin >> inhabitants;
        //call function
        arr[i].setInhabitants(inhabitants);
        cin.ignore();

        cout << "Mayor: ";
        getline(cin, mayor);
        //call function
        arr[i].setMayor(mayor);

        cout << "Area: ";
        cin >> area;
        //call function
        arr[i].setArea(area);
        cin.ignore();

        cout << "You have created:" << endl;
        arr[i].print();
    }
    return 0;
}
