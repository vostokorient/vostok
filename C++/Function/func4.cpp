#include <iostream>
using namespace std;

const double Pi = 3.141593;

// Объявление содержит два параметра
double SurfaceArea(double radius, double height);

int main()
{
    cout << "Радиус цилиндра: ";
    double radius = 0;
    cin >> radius;

    cout << "Высота цилиндра: ";
    double height = 0;
    cin >> height;

    cout << "Площадь поверхности: " << SurfaceArea(radius, height) << endl;
    return 0;
}

double SurfaceArea(double radius, double height)
{
    double area = 2*Pi*radius*(radius + height);
    return area;
}

/* Анализ
Строка 7 содержит объявление функции SurfaceArea() с двумя параметрами:
radius и height . Оба параметра имеют тип double и в списке параметров разделе
ны запятой. Строки 23-27 содержат определение, т.е. реализацию функции SurfaceArea(). 
Как можно заметить, входные параметры radius и height используются при
вычислении значения переменной area, которое затем и возвращается вызывающей
функции. */