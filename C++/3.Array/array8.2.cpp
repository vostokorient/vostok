/* Когда массив определен, мы можем присвоить его элементам значения. В при-
мере DAYS 12 элементам массива days_per_month присваивается количество дней
для каждого месяца. */

// days.cpp
// показ количества дней с начала года и до введенной даты
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
int month, day, total_days;
int days_per_month [ 12 ] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

cout << "\n Введите месяц (от 1 до 12): ";
cin >> month;
cout << "\n Введите день (от 1 до 31): ";
cin >> day;
total_days = day;

for ( int j = 0; j < month - 1; j++ )
total_days += days_per_month [ j ];
cout << "\n Общее число дней с начала года: " << total_days << endl;
return 0;
}

/* Программа вычисляет количество дней от начала года до даты, определенной
пользователем. (Внимание: программа не работает для високосных лет.) Вот при-
мер взаимодействия с программой:

Введите месяц (от 1 до 12): 3
Введите день (от 1 до 31): 11
Общее число дней с начала года: 70

Получив значения дня и месяца, программа присваивает значение дня пе-
ременной totaLdays. Затем она проходит через цикл, в котором к переменной
прибавляются значения элементов массива days_per_month. Количество этих
значений на единицу меньше, чем значение месяца. Например, если пользова-
тель ввел пятый месяц, то значения первых четырех элементов массива (31, 28,
31 и 30) будут прибавлены к переменной total_days. */