/*  К сорока студетам обратились с просьбой оценить качество пищи в студенческом
    кафетерии по десятибалльной шкале (1 означает отвратительное качество, а 10
    означает отличное). Поместите сорок ответов в массив целых чисел и просуммируйте
    результаты опроса.

    Мы хотим просуммировать количество ответов каждого типа (т.е. от 1 до 10).
    Массив responses - это массив с 40 элементами, предназначенный для ответов
    студентов. Мы используем массив с 11 элементами frequency для подсчета
    числа каждого из ответов. Мы игнорируем первый элемент frequency[0], потому
    что более логично накапливать ответ 1 в элементе frequency[1], чем в 
    frequency[0]. Это позволяет нам использовать каждый ответ непосредственно
    как индекс массива frequency. 
    Выход
    Рейтинг      Частота
          1            4
          2            3
          3            3
          4            4
          5            4
          6            11
          7            3
          8            4
          9            3
          10           3  */

// Программа опросов студентов
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int responseSize = 40, frequencySize =11;
    int responses[responseSize] = {1,2,3,4,5,6,7,8,9,10,6,9,6,7,6,5,4,3,6,5,
                                    4,8,9,6,7,2,6,10,10,6,1,2,4,5,8,6,3,6,8,6};
    
    int frequency[frequencySize] = {0};
    
    for(int answer = 0; answer<responseSize; answer++)
    ++frequency[responses[answer]];
    cout<<"Рейтинг"<<setw(17)<<"Частота"<<endl;

    for(int rating=1; rating<frequencySize; rating++)
    cout<<setw(6)<<rating<<setw(10)<<frequency[rating]<<endl;
    return 0;
}

/*  Первый цикл for берет ответы один за одним из массива response и дает 
    приращение одному из десяти счетчиков (от frequency[1] до frequency[10])
    в массиве frequency. Ключевым оператором цикла служит

        ++frequency[responses[answer]];

    Этот оператор увеличивает соответствующий счетчик frequency в зависимости
    от значения responses[answer]. Например, если счетчик answer равен 0, то
    элемент responses[answer] равен 1, так что ++frequency[responses[answer]];
    на самом деле интерпретируется как оператор

        ++frequency[1];

    который увеличивает элемент массива один. Если answer равен 1
    responses[answer] равен 2, так что ++frequency[responses[answer]];
    интерпретируется как оператор

        ++frequency[2];

    который увеличивает элемент массива два. Если answer равен 2
    responses[answer] равен 6, так что ++frequency[responses[answer]];
    интерпретируется как оператор

        ++frequency[6];

    который увеличивает элемент массива шесть и т.д. */