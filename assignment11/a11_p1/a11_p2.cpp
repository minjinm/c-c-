/* 
 CH-230-A
 a11_p2.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//creating a new class

class Dragon : public Creature{
    private:
        int wings;
    public:
        Dragon();
        void fly() const;
};

Dragon::Dragon() : wings(2){}

void Dragon:: fly() const{
    cout<<"flying with"<<wings<<"wings"<<endl;
}

class Pigeon : public Creature{
    private:
        int seeds;
    public:
        Pigeon();
        void eating() const;
};

Pigeon::Pigeon() : seeds(45678){}

void Pigeon:: eating() const{
    cout<<"eating"<<seeds<<"seeds"<<endl;
}

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

//creating a new class 

    cout << "\nCreating a Dragon.\n";
    Dragon a;
    a.run();
    a.fly();

    cout << "\nCreating a Pigeon.\n";
    Pigeon b;
    b.run();
    b.eating();

    return 0;
} 