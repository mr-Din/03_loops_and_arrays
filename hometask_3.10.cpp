﻿#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Программа рисует шахматную доску заданного размера. \n";
    int a,b;
    cout << "Введите количество квадратов (размер доски): "; cin >> a;
    cout << "Введите размер квадратов: "; cin >> b;
    int key = 0;
    for (int n = 0; n < a; n++)     //цикл для квадратов (n=0 - первая строчка квадратов, n=1 - вторая)
    {
        for (int i = 0;i < b;i++)   //цикл переноса строки
        {
            for (int k = 0; k < a; k++)     //цикл для чередования b-пробелов и b-звёздочек
            {
                for (int j = 0; j < b; j++) // цикл выводит на экран строку 
                {
                    if (n % 2 == 0)         //n - строка квадратов (равно количеству заданных квадратов 'a')
                    {
                        if (k % 2 == 0) cout << "  ";  // если n и k чётные, то выводится пробелы
                        else cout << "* ";             // если n чётное, k нечётное, то выводится звёздочки
                    }
                    else
                    {
                        if (k % 2 == 0) cout << "* ";   // если n нечётное, k чётное, то выводится звёздочки
                        else cout << "  ";              // если n, k нечётные, то выводится пробелы
                    }
                }

            }
            cout << endl;

        }
    }
}