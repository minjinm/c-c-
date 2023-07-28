/* 
 CH-230-A
 a12_p3.h
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

            inline void setName(const char* nm){
                strcpy(name, nm);
            }

            inline void setSurname(char* sn){
                strcpy(surname, sn);
            }

            inline void setDob(char* d){
                strcpy(dob, d);
            }

            inline void setHeight(int h){
                height = h;
            }

            inline void setAge(int a){
                age = a;
            }

            inline void setLocation (string s){
                location = s;
            }

            //getters

            inline string getName(){
                return name;
            }
            inline string getSurname(){
                return surname;
            }
            inline string getDob(){
                return dob;
            }
            inline int getAge(){
                return age;
            }

            inline int getHeight(){
                return height;
            }

            inline string getLocation(){
                return location;
            }

            void print();

};

class Player:public TournamentMember{

    private:
            int number, goals;
            string pos, foot;
    public:

            Player(const char*,const char*,const char*,int,int,\
                    int,const string,int,const string);
            Player(const Player&);
            Player();
    
    //setters
    inline void setNumber(int nNumber){
        number=nNumber;
    }
    inline void setPos(const string nPos){
        pos=nPos;
    }
    inline void setGoals(int nGoals){
        goals=nGoals;
    }
    inline void setFoot(const string nFoot){
        foot=nFoot;
    }

    inline int getNumber(){
        return number;
    }
    inline string getPos(){
        return pos;
    }
    inline string getFoot(){
        return foot;
    }
    void Goals(int);

    void printPlayer();
    
    //destructor
    ~Player();
};