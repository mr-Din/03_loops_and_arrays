#include "Headers.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Программа рисует в заданной области символы\n";
    char a,b;
    int N;
    cout << "Введите размер: "; cin >> N;
    cout << "Введите символ: "; cin >> a;
    cout << R"(
    Фигуры:

    * * *      *          * * *                 * * *
a -   * *  b - * *    c -   *    d -   *    e -   *  
        *      * * *                 * * *      * * *
        
    *   *      *              *      * * *          *
f - * * *  g - * *    h -   * *  i - * *    j -   * *
    *   *      *              *      *          * * *

0 - выход!    
)";
    do
    {
    cout << "Введите букву фигуры: ";cin >> b;
    switch (b)
    {
        case 'a':
        {
            for (int i = 0;i < N;i++)
            {
                for (int j = 0;j < N;j++)
                {
                    if (i <= j) cout << a << " ";
                    else cout << "  ";
                }
                cout << "\n";
            }
            break;
        }
        case'b':
        {
            for (int i = 0;i < N;i++)
            {
                for (int j = 0;j < N;j++)
                {
                    if (i >= j) cout << a << " ";
                    else cout << "  ";
                }
                cout << "\n";
            }
            break;
        }
        case'c':
        {
            for (int i = 0;i < N;i++)
            {
                for (int j = 0;j < N;j++)
                {
                    if ((i <= j) && (i + j <= N - 1)) cout << a << " ";
                    else cout << "  ";
                }
                cout << "\n";
            }
            break;
        }
        case'd':
        {
            for (int i = 0;i < N;i++)
            {
                for (int j = 0;j < N;j++)
                {
                    if ((i >= j) && (i + j >= N - 1)) cout << a << " ";
                    else cout << "  ";
                }
                cout << "\n";
            }
            break;
        }
        case'e':
        {
            for (int i = 0;i < N;i++)
            {
                for (int j = 0;j < N;j++)
                {
                    if (((i >= j) && (i + j >= N - 1)) || ((i <= j) && (i + j <= N - 1))) cout << a << " ";
                    else cout << "  ";
                }
                cout << "\n";
            }
            break;
        }
        case'f':
        {
            for (int i = 0;i < N;i++)
            {
                for (int j = 0;j < N;j++)
                {
                    if (((i >= j) && (i + j <= N - 1)) || ((i <= j) && (i + j >= N - 1))) cout << a << " ";
                    else cout << "  ";
                }
                cout << "\n";
            }
            break;
        }
        case'g':
        {
            for (int i = 0;i < N;i++)
            {
                for (int j = 0;j < N;j++)
                {
                    if ((i >= j) && (i + j <= N - 1)) cout << a << " ";
                    else cout << "  ";
                }
                cout << "\n";
            }
            break;
        }
        case'h':
        {
            for (int i = 0;i < N;i++)
            {
                for (int j = 0;j < N;j++)
                {
                    if ((i <= j) && (i + j >= N - 1)) cout << a << " ";
                    else cout << "  ";
                }
                cout << "\n";
            }
            break;
        }
        case'i':
        {
            for (int i = 0;i < N;i++)
            {
                for (int j = 0;j < N;j++)
                {
                    if ((i + j <= N - 1)) cout << a << " ";
                    else cout << "  ";
                }
                cout << "\n";
            }
            break;
        }
        case'j':
        {
            for (int i = 0;i < N;i++)
            {
                for (int j = 0;j < N;j++)
                {
                    if ((i + j >= N - 1)) cout << a << " ";
                    else cout << "  ";
                }
                cout << "\n";
            }
            break;
        }
        case '0': cout << "До свидания! \n";
            break;
        default: cout << "Неправильный выбор! \n";
            break;
     
    }
    
    }while (b!='0');
    
}

/*
        b   i>=j
        c   (i<=j)&&(i+j<=N-1)
        d   (i>=j)&&(i+j>=N-1)
        e   ((i>=j)&&(i+j>=N-1))||((i<=j)&&(i+j<=N-1))
        f   ((i>=j)&&(i+j<=N-1))||((i<=j)&&(i+j>=N-1))
        g   (i>=j)&&(i+j<=N-1)
        h   (i<=j)&&(i+j>=N-1)
        i   (i+j<=N-1)
        j   (i+j>=N-1)
    */

