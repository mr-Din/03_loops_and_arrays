#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Программа выводит целые числа, на которое оба заданных числа делиться без остатка. \n";
    int a, b;
    cout << "Введите число a: "; cin >> a;
    cout << "Введите число b: "; cin >> b;

    for(int i=1;i<a;i++)
    {
        if ((a % i == 0) && (b % i == 0)) {
            cout << a<<" и "<< b << " делится на " << i << " без остатка:\n"
            << a << "/" << i << " = " << a / i << endl
            << b << "/" << i << " = " << b / i << endl;
        }
    }
    
}
