/* в С++ тело цикла for может быть пустым, поскольку в С++ синтаксически
допустима пустая инструкция. "Бестелесные" циклы не только возможны, но за­
частую и полезны. Например, в с.ледующеЙ программе один из таких циклов ис­
пользуется для суммирования чисел от1  до 10. */
// Пример использования цикла for с пустым телом.

#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    int i;
    int sum=0;
    // Суммируем числа от 1 до 10.
    for(i=1; i <= 10; sum += i++) ; // "Бестелесный цикл.
    cout<<"Сумма чисел равна "<<sum;
    return 0;
}