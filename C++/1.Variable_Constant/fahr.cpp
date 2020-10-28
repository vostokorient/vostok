// Программа для преобразования
// градусов Цельсия в градусы Фаренгейта:
// Fahrenheit = NCelsius * (212 - 32)/100 + 32
#include <stdio.h>
#include <iostream>
int main(int nNumberofArgs, char* pszArgs[])
{
// Введите температуру в градусах Цельсия
int nNCelsius;
std::cout << "Введите температуру по Цельсию: ";
std::cin >> nNCelsius;
// для приведенной формулы преобразования
//вычислим преобразующий множитель
int nNFactor;
nNFactor = 212 - 32;
// используем вычисленный множитель для
// преобразования градусов Цельсия в
// градусы Фаренгейта
int nFahrenheit;
nFahrenheit = nNFactor * nNCelsius/100 + 32;
// вывод результатов
std::cout << "Температура по Фаренгейту: ";
std::cout << nFahrenheit << "\n";
return 0;
getchar();
}
