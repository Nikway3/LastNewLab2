#include "q.h"


deg::deg() {
};

deg::deg(double q, double w, double z) {
    a = q;
    b = w;
    c = z;
}

deg::deg(const deg &copy) {
    cout << "Copy constructor" << endl;
    this->a = copy.a;
    this->b = copy.b;
    this->c = copy.c;
}
void deg::calculation(double x)
{
    double y = (a * pow(x, 2) + b * x + c);
    cout<<"Value at point "<<x<<" = "<<y<<endl;
}
void deg::solution()
{
    double D=pow(b,2)-4*a*c;
    if (D>0)
        cout<<"There is two solutions"<<endl;
    if (D==0)
        cout<<"There is only one solution"<<endl;
    if (D<0)
        cout<<"No solutions"<<endl;
}
void deg::radical()
{
    double D=pow(b,2)-4*a*c;
    if (D>0) {
        double X1, X2;
        X1 = (-b + sqrt(D))/(2*a);
        X2= (-b - sqrt(D))/(2*a);
        cout<<"X1= "<<X1<<endl<<"X2= "<<X2<<endl;
    }
    if (D==0) {
        double X1;
        X1 = -b/(2*a);
        cout<<"X1= "<<X1<<endl;
    }
}

void deg::extremum()
{
    double Ex, X;
    if (a>0)
    {
        X = -b/(2*a);
        Ex = a*pow(X,2)+b*X+c;
        cout<<"Extremum - minimum"<<endl<<"Min= "<<Ex<<endl;
    }
    if (a<0)
    {
        X = -b/(2*a);
        Ex = a*pow(X,2)+b*X+c;
        cout<<"Extremum - maximum"<<endl<<"Max= "<<Ex<<endl;
    }
}
void deg::print()
{
    cout<<a<<"x^2+("<<b<<")x+("<<c<<")"<<endl;
}