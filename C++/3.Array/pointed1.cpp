// В листинге приведен пример использования указателя на значение целого типа.

#include <iostream>
using namespace std;

int main()
{
    int *q,n,*p;
    n=100;
    p=&n;
    q=p;
    (*p)++;

    cout<<*q<<"\n";
    cout<<n<<"\n";
    cout<<p<<"\n";
    
    return 0;
}

/* Сначала объявляется целочисленная переменная n и два указателя q и p.
Коман дой n=100 переменной n присваивается значение 100. Далее с помо-
щью команды p=&n в переменную-указатель p записывается адрес области
памяти, в которой хранится значение переменной n. Обращаем внимание
читателя на то, что значением переменной p является именно адрес! Коман-
дой q=p переменной q в качестве значения присвоен адрес, являющийся
значением переменной p. В данном случае использовано то свойство, что
при совпадении типов один указатель можно присвоить в качестве значе-
ния другому указателю. В результате указатель p и указатель q ссылаются
на одну и ту же область памяти. Командой (*p)++ значение, записанное по
адресу p, увеличивается на единицу. Напомним, что инструкция *p означа-
ет ссылку на то значение, что записано по адресу p. Команду (*p)++ следу-
ет понимать так: взять значение, записанное по адресу p, и увеличить его на
единицу (поскольку оператор ++ имеет более высокий приоритет, чем опе-
ратор *, используем скобки). У этой команды более серьезные последствия,
чем может показаться на первый взгляд. Прежде всего, в результате на еди-
ницу увеличивается значение переменной n. Действительно, поскольку
адрес p определялся командой p=&n, то фактически, по определению, это
адрес области памяти, где хранится значение переменной n. Поскольку со-
ответствующее значение увеличено на единицу, это означает, что на едини-
цу увеличилось значение переменной n. Далее, указатель q ссылается на эту
же область памяти. Поэтому результатом команды *q (значение, записан-
ное по адресу q) будет увеличенное на единицу значение переменной n, т.е.
число 101. В конце выполнения программы на экран выводятся значения
*q, n и p. Первые два значения, в силу указанных выше причин, равны 101.
В качестве значения p выводится адрес области памяти – это число в шест-
надцатеричном представлении. Результат может быть, например, таким:

101
101
0012FF78

В данном случае измениться может только третья строка вывода результа-
тов программы, первые две будут неизменными. */