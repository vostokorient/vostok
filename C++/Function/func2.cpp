#include <iostream>
using namespace std;

const double Pi = 3.14159;

// Объявления функций (прототипы)
double Area(double radius);
double Circumference(double radius);

int main()
{
    cout << "Введите радиус: ";
    double radius = 0;
    cin >> radius;

    // Вызов функции "Area"
    cout << "Площадь равна:  " << Area(radius) << endl;

    // Вызов функции "Circumference"
    cout << "Периметр равен: " << Circumference(radius) << endl;

    return 0;
}

// Определения функций (реализации)
double Area(double radius)
{
    return Pi * radius * radius;
}

double Circumference(double radius)
{
    return 2 * Pi * radius;
}

/* Вывод результата

Введите радиус: 6
Площадь равна:  113.097
Периметр равен: 37.6991

*/