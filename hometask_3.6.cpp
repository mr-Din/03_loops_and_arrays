#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Программа выводит число, квадрат которого равен кубу суммы его цифр \n";
    int a = 1000, k = 0;
    //cout << "Введите число: "; cin >> a;
    for(int i=0;i<a;i++)
    {
        int j = i;
        int b = 0;
        while (j)
        {
            b = j % 10 + b;
            j /= 10;
            
        }
        //cout << b << endl;
        if ((b * b * b) == (i * i)) { cout << i<<endl; }
    }
    
}
