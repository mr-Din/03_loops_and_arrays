#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Программа находит числа в диапазоне с 2мя одинаковыми цифрами (до999)\n";
    int a=0,b=0,k=0;
    cout << "Введите первое число: "; cin >> a;
    cout << "Введите второе число: "; cin >> b;
    cout << b % 10<<endl;
    for (int i = a;i < b;i++)
    {
        if (((i / 10) % 10 == i % 10) || ((i / 100) % 10 == (i / 10) % 10)|| ((i / 100) % 10 == i % 10))
            continue;
        else
        {
            cout << i << endl;
            k++;
        }
    }cout << "Количество чисел = " <<k;
    
}
