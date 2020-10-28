/*  Программа присваивает начальные целые значения 2,4,6,...,20 элементам
    массива s из десяти элементов и печатает массив в табулированном
    формате. Эти значения генерируются путем умножения каждого 
    последуещего значения счетчика цикла на 2 и прибавления 2. 
    Выход
    
    Элемент     Значения
          0            2
          1            4
          2            6
          3            8
          4            10
          5            12
          6            14
          7            16
          8            18
          9            20 */

// Присваивание элементам массива четных начальных значений
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ArraySize = 10;
    int s[ArraySize];

    for(int j=0; j<ArraySize; j++)                  // Задание значений
    s[j]=2+2*j;
    cout<<"Элемент"<<setw(21)<<"Значение"<<endl;
    
    for(int j=0; j<ArraySize; j++)                  // Печать значений
    cout<<setw(7)<<j<<setw(13)<<s[j]<<endl;
    return 0;
}