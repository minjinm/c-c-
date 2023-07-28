/* 
 CH-230-A
 a12_p2.h
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

//declaration of class

#include<string>
#include<cstring>

using namespace std;

class TournamentMember{

    private:

            //Properties of a member
            char name[36];
            char surname[36];
            char dob[11];
            int age, height;
            string location;
    
    public:
            //default constructor
            TournamentMember();
            //parametric contrcutor
            TournamentMember(const char*, const char*, const char*, int, int);
            //copy contructor
            TournamentMember(const TournamentMember&);
            //destructor
            ~TournamentMember();

            //setters

            void setName(const char* nm){
                strcpy(name, nm);
            }

            void setSurname(char* sn){
                strcpy(surname, sn);
            }

            void setDob(char* d){
                strcpy(dob, d);
            }

            void setHeight(int h){
                height = h;
            }

            void setAge(int a){
                age = a;
            }

            void setLocation (string s){
                location = s;
            }

            //getters

            string getName(){
                return name;
            }
            string getSurname(){
                return surname;
            }
            string getDob(){
                return dob;
            }
            int getAge(){
                return age;
            }

            int getHeight(){
                return height;
            }

            string getLocation(){
                return location;
            }

            void print();

};