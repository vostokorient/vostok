#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    double x=2.5, y=3;

    cout<<setiosflags (ios::fixed | ios::showpoint)<<setw(10)<<setprecision(2)<<pow(2.5,3)<<endl;
    return 0;
}