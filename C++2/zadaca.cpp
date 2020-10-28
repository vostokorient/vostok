#include <iostream>
#include <cstdint>
using namespace std;

double getDouble()
{
    cout << "Enter the value: " << endl;
    double value;
    cin >> value;

    return value;
}

char getOperator()
{
cout << "Enter one of the following: +, -, *, or / ";
char op;
cin >> op;
return op;
}

void printResult(double x, char op, double y)
{
if (op == '+')
cout << x << " + " << y << " = " << x + y << '\n';
else if (op == '-')
cout << x << " - " << y << " = " << x - y << '\n';
else if (op == '*')
cout << x << " * " << y << " = " << x * y << '\n';
else if (op == '/')
cout << x << " / " << y << " = " << x / y << '\n';
}

int main()
{
double x = getDouble();
char op = getOperator();
double y = getDouble();

printResult(x, op, y);

return 0;
}