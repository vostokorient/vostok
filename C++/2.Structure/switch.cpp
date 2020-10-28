// Подсчет числа буквенных оценок

#include <iostream>
using namespace std;

int main()

{
    int grade;
    int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;

    cout << "Введите буквенную оценку: " << endl 
        << "Введите EOF по окончании ввода: " << endl;
        while ( (grade = cin.get()) !=EOF ) {

            switch (grade) {            // switch, вложенный в while
                case 'A' : case 'a' :   // grade равна А в верхнем регистре
                ++aCount;               // или а в нижнем регистре
                break;
                case 'B' : case 'b' :   // grade равна B в верхнем регистре
                ++bCount;               // или b в нижнем регистре
                break;
                case 'C' : case 'c' :   // grade равна C в верхнем регистре
                ++cCount;               // или c в нижнем регистре
                break;
                case 'D' : case 'd' :   // grade равна D в верхнем регистре
                ++dCount;               // или d в нижнем регистре
                break;
                case 'F' : case 'f' :   // grade равна F в верхнем регистре
                ++fCount;               // или f в нижнем регистре
                break;
                case '\n' : case ' ' :  // этот ввод игнорируется
                break;
                default:                // При любых других символах
                cout << "Введена неправильная буквенная оценка" << endl
                    << "Введите новую оценку" << endl;
                break;
            }
        }
    cout << endl << "Количество различных оценок: "
        << endl << "A: " << aCount << endl << "B: " << bCount 
        << endl << "C: " << cCount << endl << "D: " << dCount
        << endl << "F: " << fCount << endl;
    return 0;
}