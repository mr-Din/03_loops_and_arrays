#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    cout << "Программа находит минимальный и максимальный элементы массива \n";
    int a;
    cout << "Введите размер массива: "; cin >> a;
    int* A= new int[a];
    for (int i = 0; i < a; i++)
    {
        A[i] = rand() % (100 - (-100)) - 100;
        cout << "A[" << i << "] = " << A[i]<<" ";
    }
    cout << endl;
    int a_max=A[0],a_min=A[0];
    for (int i = 0; i < a; i++)
    {
        if (A[i] > a_max) a_max = A[i];
        if (A[i] < a_min) a_min = A[i];
    }
    cout << "Максимальный элемент массива: " << a_max<<endl;
    cout << "Минимальный элемент массива: " << a_min<<endl;
    delete[]A;
}
