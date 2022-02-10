#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    cout << "Программа создаёт массив C[a+b] из суммы массивов A[a] и B[b] \n";
    int a,b;
    cout << "Введите размер массива 1: "; cin >> a;
    cout << "Введите размер массива 2: "; cin >> b;
    int* A = new int[a];
    int* B = new int[b];
    for (int i = 0; i < a; i++)
    {
        A[i] = rand() % (10 - (-10)) - 10;
        cout << "A[" << i << "] = " << A[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < b; i++)
    {
        B[i] = rand() % (10 - (-10)) - 10;
        cout << "B[" << i << "] = " << B[i] << " ";
    }
    cout << endl;
    int c = a + b;
    int* C = new int[c];
    for (int i = 0;i < (c);i++)
    {
        if (i < a) { C[i] = A[i]; }
        if (i >= a) { C[i] = B[i-a]; }
        cout << "C[" << i << "] = " << C[i] << " ";
    }
    cout << endl;
    delete[]A;
    delete[]B;
    delete[]C;


    
}
