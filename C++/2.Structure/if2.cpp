#include <iostream>
using namespace std;

int main()

{
    int grade;
    cout << "Введите оценки экзамена \n";
    cin >> grade;
        if (grade>=60)
            cout << "Зачет \n" << endl;
        else
            cout << "Не зачет \n" << endl;
    return 0;
}