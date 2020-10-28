#include <iostream>
using namespace std;

int main()
{
    int a, b, x;
    x = 2;
    cout << "1 часы работы: ";
    cin >> a;
    cout << "2 часы работы: ";
    cin >> b;
    cout << "Сумма времени = " << a+b << " часов, " << " Зарплата = " << (a+b)*x << " долларов" << endl;
    return 0;
}