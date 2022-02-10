#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    cout << "Программа находит индексы (месяцы) с минимальным и максимальным значениями в заданном диапазоне \n";
    int a,b;
    int* A= new int[12];
    for (int i = 0; i < 12; i++)
    {
        A[i] = rand() % 1000;
        cout << "Месяц " << i+1 << " = \t" << A[i]<<"\n";
    }
    cout << endl;
    cout << "Введите период от ";cin >> a;"до ";cin >> b;
    int max = A[a-1], min = A[a-1];
    int k_max = 0, k_min = 0;       //для определения индекса максимального и минимального элемента
    for (int i = a-1; i < b; i++)
    {
        if (A[i] > max) { max = A[i]; k_max = i+1; }
        if (A[i] < min) { min = A[i]; k_min = i+1; }
    }
    cout << "Максимальное значение: " << max << " в "<<k_max<<" месяце"<<endl;
    cout << "Минимальное значение: " << min << " в " << k_min << " месяце" << endl;
    delete[]A;
}
