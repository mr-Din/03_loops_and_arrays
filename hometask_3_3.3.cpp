#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    cout << "Программа находит сумму отриц элементов массива и др.(см. homework 3) \n";
    int a;
    cout << "Введите размер массива: "; cin >> a;
    int* A = new int[a];
    for (int i = 0; i < a; i++)
    {
        A[i] = rand() % (10 - (-10)) - 10;
        cout << "A[" << i << "] = " << A[i] << " ";
    }
    cout << endl;
    int a_max = A[0], a_min = A[0],minus=0,j=0,k=0, pow_A=0,pow_chet=A[0];

    for (int i = 0; i < a; i++)
    {
        if (A[i] < 0) { minus = A[i]+minus; }
        if (A[i] < a_min) { a_min = A[i]; j = i; }
        if (A[i] > a_max) { a_max = A[i]; k = i; }
        if ((i>0)&&(i % 2 == 0)) { pow_chet *= A[i]; }

    }
    if (j > k)
    {
        pow_A = A[k];
        for (int i = k+1; i <= j; i++)
        {
            pow_A *= A[i];
        }
    }
    else
    {
        pow_A = A[j];
        for (int i = j+1; i <= k; i++)
        {
            pow_A *= A[i];
        }
    }

    int sum_minus=0,key1=0,key2=0;
    for (int i = 0; i < a; i++)
    {
        if (A[i] < 0) { key1 = i; break; }
    }
    for (int i = 0; i < a; i++)
    {
        if (A[i] < 0) { key2 = i; }
    }
    for (int i = key1+1;i < key2;i++)
    {
        sum_minus = A[i]+sum_minus;
    }
    cout << "Максимальный элемент массива: " << a_max << endl;
    cout << "Минимальный элемент массива: " << a_min << endl;
    cout << "Сумма отрицательных элементов: " << minus << endl;
    cout << "Произведение элементов между max и min: " << pow_A << endl;
    cout << "Произведение элементов с чётными индексами: " << pow_chet << endl;
    cout << "Сумма элементов между отрицательными элементами: " << sum_minus << endl;
    delete[]A;
}
