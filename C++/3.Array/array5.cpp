/* Элемент     Значения
          0            32
          1            27
          2            64
          3            18
          4            95
          5            14
          6            90
          7            70
          8            60
          9            37 */

// Присваивание начальных значений в объявлении массива
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n[10]={32,27,64,18,95,14,90,70,60,37};

    cout<<"Элемент"<<setw(21)<<"Значение"<<endl;
    for(int i=0; i<10; i++)
    cout<<setw(7)<<i<<setw(13)<<n[i]<<endl;
    return 0;
}