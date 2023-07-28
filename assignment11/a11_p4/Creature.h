/* 
 CH-230-A
 a11_p4.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};
class Dragon : public Creature{
    private:
        int wings;
    public:
        Dragon();
        void fly() const;
};

class Pigeon : public Creature{
    private:
        int seeds;
    public:
        Pigeon();
        void eating() const;
};