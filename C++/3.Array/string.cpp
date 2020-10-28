/* Язык C++ предоставляет мощное и в то же время безопасное средство работы со
строками — класс s t d : : s t r i n g . Класс s t d : : s t r i n g не является 
статическим массивом элементов типа ch ar неизменного размера, как строки в стиле С, 
и допускает увеличение размера, когда в нем необходимо сохранить больше данных. 
Применение s t d : : s t r i n g для работы со строковыми данными показано ниже */

/* Использование s t d : : s t r i n g для инициализации
и хранения пользовательского ввода, а также для копирования,
конкатенации и определения длины строки */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string greetString("Hello std::string!");
    cout<<greetString<<endl;

    cout<<"Введите текстовую строку: "<<endl;
    string firstLine;
    getline(cin, firstLine);

    cout<<"Введите другую строку: "<<endl;
    string secondLine;
    getline(cin, secondLine);
    
    cout<<"Результат конкатенации: "<<endl;
    string concatString = firstLine + " " + secondLine;
    cout<<concatString<<endl;

    cout<<"Копия полученной строки: "<<endl;
    string aCopy;
    aCopy = concatString;
    cout<<aCopy<<endl;

    cout<<"Длина строки: "<<concatString.length()<<endl;
    return 0;
}

/* 
Результат

Hello std::string!
Введите текстовую строку:
I love
Введите другую строку:
C++ strings
Результат конкатенации:
I love C++ strings
Копия полученной строки:
I love C++ strings
Длина строки: 18
*/