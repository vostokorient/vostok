#include <iostream>
using namespace std;

int main()

{
    //Операции с числами плавающей точкой
    float num1, num2, num3;
    cout << "Введите три различных цифра \n \n";
    cin >> num1 >> num2 >> num3;
    cout << "Сумма равна              " << num1 + num2 +num3 << "\n";
    cout << "Среднее значение равно   " << (num1 + num2 + num3) / 3 << "\n";
    cout << "Произведение равно       " << num1 * num2 * num3 << "\n \n";
    return 0;
}