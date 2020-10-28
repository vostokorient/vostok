#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    double x, y, z;
    cout << "\n Введите сторон Треугольника: \n\n";
    cin >> x;
    cin >> y;
    z=sqrt((x*x)+(y*y));
    cout << endl << "Гипотенуза треугольника равнв: " << z << endl << endl;
    return 0;
}