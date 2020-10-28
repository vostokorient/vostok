#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char* pszArgs[])
// вводим первый аргумент...
{
    int arg1;
    cout << "Введите arg1: ";
    cin >> arg1;
    // ... второй
    int arg2;
    cout << "Введите arg2: ";
    cin >> arg2;
    // теперь решаем, что делать:
        if (arg1 > arg2)
        {
        cout << "аргумент 1 больше, чем аргумент 2\n";
        }
        else
        {
        cout << " аргумент I не больше, чем аргумент 2\n";
        }
    return 0;
}
