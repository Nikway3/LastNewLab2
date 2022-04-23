#pragma once
#include <iostream>
#include <cmath>

using namespace std;
class deg
{
private:
    double a, b, c;
public:
    deg();
    deg(double q, double w, double z);
    deg(const deg &copy);
    void calculation (double x);
    void solution ();
    void radical ();
    void extremum();
    void print ();
};
