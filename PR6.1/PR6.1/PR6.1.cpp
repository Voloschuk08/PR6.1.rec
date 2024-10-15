#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Рекурсивна функція для виведення масиву
void print(int a[], int size, int i = 0) {
    if (i == size)
        return;
    cout << setw(4) << a[i];
    print(a, size, i + 1);
}

// Рекурсивна функція для підрахунку кількості елементів, що відповідають критерію
int countElements(int a[], int size, int i = 0)
{
    if (i == size)
        return 0;
    if (a[i] > 0 && ! (i % 5 == 0))
        return 1 + countElements(a, size, i + 1);
    return countElements(a, size, i + 1);
}

// Рекурсивна функція для обчислення суми елементів, що відповідають критерію
int sumElements(int a[], int size, int i = 0)
{
    if (i == size)
        return 0;
    if (a[i] > 0 && !(i % 5 == 0))
        return a[i] + sumElements(a, size, i + 1);
    return sumElements(a, size, i + 1);
}

// Рекурсивна функція для заміни елементів, що відповідають критерію, на 0
void replace(int a[], int size, int i = 0) 
{
    if (i == size)
        return;
    if (a[i] > 0 && !(i % 5 == 0))
        a[i] = 0;
    replace(a, size, i + 1);
}

int main() 
{
    const int size = 20;
    int a[size];

    // Ініціалізація генератора випадкових чисел
    srand(time(0));

    // Заповнення масиву випадковими числами в діапазоні [-20, 50]
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 71 - 20;
    }

    // Виведення початкового масиву
    cout << "Initial array: " << endl;
    print(a, size);
    cout << endl;

    // Обчислення кількості та суми елементів, що відповідають критерію
    int count = countElements(a, size);
    int sum = sumElements(a, size);

    // Заміна елементів, що відповідають критерію, на 0
    replace(a, size);

    // Виведення результатів
    cout << "Count of elements = " << count << endl;
    cout << "Sum of elements = " << sum << endl;

    // Виведення модифікованого масиву
    cout << "Modified array: " << endl;
    print(a, size);
    cout << endl;

    return 0;
}

