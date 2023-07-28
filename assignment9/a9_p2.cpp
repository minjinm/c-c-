/* 
 CH-230-A
 a9_p2.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main(){

    int n;
    double x;
    string s;
    //reads one integer value n;
    cin >> n;
    //read one double value x;
    cin >> x;
    //read string s 
    getline(cin, s);
    cin >> s;
    //display s and x separated by ':' n times
    for(int i=0; i<n; i++){
        cout << s << ":" << x << endl;
    }

    return 0;
}