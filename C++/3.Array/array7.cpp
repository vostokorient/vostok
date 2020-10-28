/*  Программа суммирует значения, которые содержатся в массиве а из 12 целых чисел.
    Оператор в теле цикла for осуществляет суммирование. */

// Вычисление суммы элементов массива
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ArraySize = 12;
    int a[ArraySize]={1,3,5,4,7,2,99,16,45,67,89,45};
    int total=0;

    for(int i=0; i<ArraySize; i++)
    total+=a[i];
    cout<<"Сумма значений элементов массива равна "<<total<<endl;

    return 0;
}