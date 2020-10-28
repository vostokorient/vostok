#include <iostream>
using namespace std;

int main()

{
    int grade;
    cout << "Введите оценки экзамена \n";
    cin >> grade;
    cout << (grade >= 60 ? "Зачет" : "Не зачет") << endl;
    return 0;

}