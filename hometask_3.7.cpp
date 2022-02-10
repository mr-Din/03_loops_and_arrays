#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Программа выводит целые числа, на которое заданное число делиться без остатка. \n";
    int a, k = 0;
    cout << "Введите число: "; cin >> a;
    for(int i=1;i<a;i++)
    {
        if (a % i == 0) cout << a<<" делится на "<< i<< " без остатка:\t"<< a<<"/"<<i<<" = "<<a/i<<endl;
    }
    
}
