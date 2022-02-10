#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Программа находит число b с условием, что a/b*b - без остатка, a/b*b*b - с остатком\n";
    int a = 0, b = 0, k = 0;
    cout << "Введите число: "; cin >> a;
    for (int i = 1;i <= a;i++)
    {
        if (((a%(i*i))==0)&&((a%(i*i*i))!=0))
            cout<<i<<endl;
    }
    
    

}
