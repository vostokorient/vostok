#include <iostream>
#include <string>
using namespace std;

int main()

{
	string valid_pass = "qwerty123";
	string user_pass;
	
	cout << "Введите пароль: ";
	getline(cin, user_pass);
	
	if (user_pass == valid_pass)
	{
		cout << "Доступ разрешен." << endl;
	}
	else
	{
		cout << "Неверный пароль!" << endl;
	}
	return 0;
}
