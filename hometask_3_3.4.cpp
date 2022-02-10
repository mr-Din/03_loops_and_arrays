#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    cout << "Программа копирует элементы массива разм.10 в 2 массива разм.5 \n";
    //int a;
    //cout << "Введите размер массива: "; cin >> a;
    int* A = new int[10];
    for (int i = 0; i < 10; i++)
    {
        A[i] = rand() % (10 - (-10)) - 10;
        cout << "A[" << i << "] = " << A[i] << " ";
    }
    cout << endl;
    int* B = new int[5];
    int* C = new int[5];
    for (int i = 0;i < 5;i++)
    {
        B[i] = A[i];
        cout << "B[" << i << "] = " << B[i] << " ";
    }
    cout << endl;
    for (int i = 0;i < 5;i++)
    {
        C[i] = A[i+5];
        cout << "C[" << i << "] = " << C[i] << " ";
    }

    
    delete[]A;
    delete[]B;
    delete[]C;
}
