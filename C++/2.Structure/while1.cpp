// Программа для расчета среднего значения 
// с повторением, управляемым счетчиком

#include <iostream>
using namespace std;

int main()
{
    int counter, grade, total, average;

    //этап задания начальных значений
    total=0;
    counter=1;

        //этап обработки данных
        while (counter <= 10)
    {
        cout << "Введите число: ";
        cin >> grade;
        total = total + grade;
        counter = counter + 1;
    }
    //завершающий этап
    average = total / 10;
    cout << "Средняя оценка равна: " << average << endl;
    return 0;
}