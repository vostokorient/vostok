/* Обратите внимание, что при выделении памяти для диапазона элементов с ис
пользованием оператора new[] вы обязаны освобождать ее с помощью оператора
delete[], как показано в листинге */

#include <iostream>
#include <string>
using namespace std;

int main()
{
cout << "Количество чисел в массиве?" << endl;

int numEntries = 0;
cin >> numEntries;

int* myNumbers = new int[numEntries];

cout << "Выделена память по адресу: " << myNumbers << hex << endl;

// Освобождение памяти
delete[] myNumbers;

return 0;
}

/* Самыми важными являются строки, в которых используются операторы new[] и
delete[]], — строки 16 и 21 соответственно. По сравнению с листингом в котором 
выделялось место только для одного элемента, здесь выделяется блок памяти для
массива элементов, количество которых определяет пользователь. В данном примере
мы ввели значение 5001, но оно может быть и иным, например 20 или 55000. Эта 
программа при каждом запуске выделяет разное количество памяти, зависящее от ввода
пользователя. Для такого выделения памяти с помощью оператора new[] в программе 
должно иметься соответствующее освобож дение памяти с помощью оператора
delete[] по окончании работы с выделенной памятью. */