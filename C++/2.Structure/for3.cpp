// Некто внес $1000 на депозитный счет под 5 процентов годовыхю
// Предпологая, что доход оставляется на депоозите, расчитать и напечатать
// суммы денег на счете в конце каждого года на протяжении 10 лет.
// Использовать для расчета следующую формулу:
// а = р ( 1 + r ) ^ n ;
// где 
// р - первоначальный (основной) вклад
// r - ставка годового дохода
// n - число лет
// а - сумма депозита к концу n-го года

// Расчет сложного процента

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()

{
    double amount, principial = 1000.0, rate = 0.05;
    cout << " Год" << setw(21) << "         Сумма депозита" << endl;

    for (int year = 1; year <= 10; year++)  {
        amount = principial * pow (1.0 + rate, year);
        cout << setw(3) << year
             << setiosflags (ios::fixed | ios::showpoint)
             << setw(21) << setprecision(3) << amount << endl;}
             return 0;
}