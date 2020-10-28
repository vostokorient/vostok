#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()

{
    double x, y, z;
    cout << "\n Введите сторон Треугольника: \n\n";
    cin >> x;
    cin >> y;
    z=sqrt((x*x)+(y*y));
    cout << endl << "x=" << x << setw(9) << y << setw(9) << (x*x) << setw(9) << (y*y) 
    << setw(9) << (x*x)+(y*y) << setw(9) << setprecision(3) << z << setw(9) << (z*z) 
    << endl << endl;
    return 0;
}