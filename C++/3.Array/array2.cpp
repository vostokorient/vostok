#include <iostream>
using namespace std;

int main()
{
    int myNumbers[5]={5,12,6,39,48};

    cout << "Элемент с индексом 0     " << myNumbers[0] << endl;
    cout << "Элемент с индексом 1     " << myNumbers[1] << endl;
    cout << "Элемент с индексом 2     " << myNumbers[2] << endl;
    cout << "Элемент с индексом 3     " << myNumbers[3] << endl;
    cout << "Элемент с индексом 4     " << myNumbers[4] << endl;

    cout << endl;

    cout << "Введите индекс изменяемого элемента " << endl;
    int elementIndex = 0;
    cin >> elementIndex;

    cout << "Введите новое значение " << endl;
    int newValue = 0;
    cin>> newValue;

    myNumbers[elementIndex] = newValue;

    cout << "Элемент с индексом " << elementIndex <<"     "<< myNumbers[elementIndex] << endl;
    return 0;
}