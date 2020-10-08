
#include <iostream>
#include <math.h>
using namespace std;

class rectangular
{
    double xco,yco;          //x and y cordinate
public:
    rectangular()        //constructor
    {
        xco=0.0;
        yco=0.0;
    }
    rectangular(double x, double y)
    {
        xco=x;
        yco=y;
    }
    void display()
    {
        cout<<"(" <<xco<<","<<yco<<")";
    }
};



class polar
{
    double radius,angle;          //x and y cordinate
public:
    polar()       //constructor
    {
        radius=0.0;
        angle=0.0;
    }
    polar(double r, double a)
    {
        radius=r;
        angle=a;
    }
    void display()
    {
        cout<<"(" <<radius<<","<<angle<<")";
    }
    operator rectangular()             //casting operator function
    {   double x=radius * cos(angle);
        double y=radius * sin(angle);
	cout << endl << "casting operator function" << endl;
        return rectangular(x,y);
    }  //temporary object

/*
Text Box:
    Output of the program
    Polar Values=(10,0.785398)
                 Rec Values=(7.071069,7.071067)
*/
};


int main()
{
    rectangular rec;
    polar pol(10.0,0.785398);
    rec=pol;  //or rec=rectangular(pol);
    // It is equivalent to pol.operator rectangular()
    cout<<"\nPolar Values=";
    pol.display();
    cout<<"\nRec Values=";
    rec.display();
    return 0;
}
