#include <iostream>
using namespace std;

double box(int length, int width, int height);
int main()
{
    box(5, 6, 9);
    box(8, 7.3, 8.45);
    box(89, 5.6, 4.23);
    return 0;
}
double box(int length, int width, int height)
{
    cout << "Объем параллелепипеда равна: " << length * width * height << endl;
    return 0;
}

/* Вывод результата

Объем параллелепипеда равна: 270
Объем параллелепипеда равна: 448
Объем параллелепипеда равна: 1780

*/

