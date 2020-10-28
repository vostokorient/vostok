#include <iostream>

using namespace std;
int main()

{
    int num1, num2;
    cout << "Введите числа \n";
    cin >> num1 >> num2;
    if (num1 >num2)
    cout << "Больше" << num1 << "\n";
    if (num2 > num1)
    cout << "Больше" << num2 << "\n";
    if (num1 == num2)
    cout << "Эти числа равны \n";
    return 0;
}