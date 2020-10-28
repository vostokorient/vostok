#include <iostream>
using namespace std;

int main()

{
    // Операция с числами * / + -
    int num1, num2;
    cout << "Enter num1 \n";
    cin >> num1;
    cout << "Enter num2 \n";
    cin >> num2;
    cout << "\n" 
    << "Сумма чисел         " << num1+num2 << "\n" 
    << "Произведение чисел  " << num1*num2 << "\n" 
    << "Разница чисел       " << num1-num2 << "\n" 
    << "Деление чисел       " << num1/num2 << "\n" 
    << "\n";
    return 0;
}