#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Программа определяет кол-во цифр в числе, их сумму и ср.арифметическое, кол-во нулей. \n";
    int a, b=0, k=0,j=0,m=0;
    double s;
    cout << "Введите число: "; cin >> a;
    while (a)
    {
        b = a % 10;
        m += b;
        a /= 10;
        k++;
        if (b == 0) j++;
    }
    s = double (m) / double (k);
    cout << "Количество цифр в числе = " << k << endl;
    cout << "Сумма цифр = " << m << endl;
    cout << "Количество нулей в числе = " << j << endl;
    cout << "Среднее арифметическое суммы цифр = " << s << endl;
            
}
