/* 
 CH-230-A
 a11_p1.cpp
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

class Box{

private:
    double h,w,d;
    //setters
public:
    void setH(double newH);
    void setW(double newW);
    void setD(double newD);

    //getters
    double getH();
    double getW();
    double getD();
    
    //constructors
    Box();
    Box(double, double, double);
    Box(const Box& box);
    //destructors
    ~Box();
    double getVolume();
};