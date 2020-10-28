#include <iostream>
#include <cmath>
using namespace std;

double myfunc(double r);

int main() {

    double r;

    cout<<"enter the r: "<<endl;
    cin>>r;

    cout<<"s is: "<<myfunc(r)<<endl;
    return 0;
}

double myfunc(double r) {
    
    double const pi=3.14;
    double s;

    s=pi*r*r;
    return s; }