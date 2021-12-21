// lab6.2(1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <iomanip>

using namespace std;

void Print(int* a, const int size);
void Sort(int* a, const int size);
void Create(int* a, const int size, const int High);

int main()
{
    srand((unsigned)time(0));

    const int n = 20;
    int a[n];
    Create(a, n, 100);
    cout << "Start array= ";
    Print(a, n);
    Sort(a, n);
    cout << "Sorted array= ";
    Print(a, n);

    getchar();
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << '\n';
}

void Sort(int* a, const int size) // модифікований метод бульбашки
{

    for (int i = 1; i < size; i++)
    {
        int k = 0; // показник, чи були обміни
        for (int j = 0; j < size - i; j++) // номер поточного елемента
            if (a[j] < a[j + 1]) // якщо порушено порядок
            {
                int tmp = a[j + 1]; // обмін елементів
                a[j + 1] = a[j];
                a[j] = tmp;
                k = 1;
            }

        if (k == 0)
            return;
    }
}

void Create(int* a, const int size, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = rand() % High;
}