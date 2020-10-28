#include <iostream>
using namespace std;

int GetValueFromUser()
{
    cout << "Enter the integer: " << endl;
    int x;
    cin >> x;
    return x;
}

int main()
{
    int a = GetValueFromUser();
    int b = GetValueFromUser();

    cout << "a + b = " << a + b << endl;
    return 0;
}

/* Результат выполнения программы:

Enter an integer: 4
Enter an integer: 9
4 + 9 = 13

Здесь main() прерывается 2 раза. Обратите внимание, в обоих случаях,
полученное пользовательское значение сохраняется в переменной x , а
затем передаётся обратно в main() с помощью return, где присваивается
переменной a или b !  */