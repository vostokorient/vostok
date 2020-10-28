// Суммирование всех четных чисел от 2 до 100
// Суммирование с помощю for

#include <iostream>
using namespace std;

int main()

{
    int sum = 0;

    for (int number = 2; number <= 100; number += 2)    // number += 2 ====> number = number + 2
    sum += number;                                      // sum += number ====> sum = sum + number
    cout << "Сумма равна: " << sum << endl;
    return 0;
}