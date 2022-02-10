#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Программа удаляет заданную цифру из числа\n";
    int a = 0, b = 0, k = 0;
    cout << "Введите число: "; cin >> a;
    cout << "Введите цифру: "; cin >> k;
    while (a)
    {
        if (a % 10 != k) b = b * 10 + a % 10;
        a /= 10;
    }
    cout << b<<endl;
    while (b)
    {
        a = a * 10 + b % 10;
        b /= 10;
    }
    cout << a<<endl;
    

}
