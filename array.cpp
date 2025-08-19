#include <iostream>

using namespace std;


const int SIZE = 10;
void printArr(int mas[SIZE]);
void inputArr(int mas[]);
void sumSubZeroArr(int mas[]);
void sumArr(int mas[]);
int maxArr(int mas[]);
int minNumArr(int mas[]);
void randArr(int mas[], int x);
void swapNumArr(int mas[]);
void countXArr(int mass[]);

int main()
{
    setlocale(LC_ALL, "rus");
    int massive[SIZE];
    for (int i = 0; i < SIZE; i++)
        massive[i] = 0;
    cout << massive[SIZE - 1] << endl;
    //inputArr(massive);
    randArr(massive, 10);
    printArr(massive);
    sumSubZeroArr(massive);
    sumArr(massive);
    maxArr(massive);
    minNumArr(massive);
    swapNumArr(massive);
    printArr(massive);
    countXArr(massive);

    return 0;

}
void printArr(int mas[SIZE])//Вывести массив
{
    for (int i = 0;i < SIZE;i++)
        cout << mas[i] << " ";
    cout << endl;
}

void inputArr(int mas[])//Заполнить массив введенными данными
{
    for (int i = 0; i < SIZE; i++)
        cin >> mas[i];
}
void sumArr(int mas[])//1 Найти сумму элементов массива
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
        sum += mas[i];
    cout << "Сумма  = " << sum << endl;

}
void sumSubZeroArr(int mas[])//2 Найти сумму отрицательных элементов массива
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
        if (mas[i] < 0)
            sum += mas[i];
    cout << "Сумма отрицательных = " << sum << endl;

}
//3 Найти максимальный элемент массива
int maxArr(int mas[])
{
    int max = mas[0];
    for (int i = 0; i < SIZE; i++)
        if (mas[i] > max)
            max = mas[i];
    cout << "Максимальный элемент = " << max << endl;
    return max;
}
//4 найти номер минимального элемента
int minNumArr(int mas[])
{
    int min = mas[0];
    int minN = 0;
    for (int i = 0; i < SIZE; i++)
        if (mas[i] < min)
            min = mas[i], minN = i + 1;
    cout << "Номер минимального элемента = " << minN << endl;
    return min;
}
//5 Поменять местами минимальный и максимальный элементы массива

void swapNumArr(int mas[])
{
    int a, b, i = 0;
    int min = mas[0], max = mas[0];
    int minN = 0;
    for (int i = 0; i < SIZE; i++)
        if (mas[i] < min)
            min = mas[i], a = i;
    for (int i = 0; i < SIZE; i++)
        if (mas[i] > max)
            max = mas[i], b = i;

    long int c = mas[b];
    mas[b] = mas[a];
    mas[a] = c;


}
//6 Найти количество вхождений числа x в массив
void countXArr(int mas[])
{
    int x, n = 0;
    cout << "ВВедите Х" << endl;
    cin >> x;
    for (int i = 0; i < SIZE; i++)
        if (mas[i] == x)
            n = (n + 1);
    cout << "Х повторяется " << n << " раз(а)" << endl;
}

//Случайные числа
void randArr(int mas[], int x)
{
    srand(time(NULL));
    for (int i = 0;i < SIZE;i++)
        mas[i] = rand() % (2 * x + 1) - x;
}
//Первый коммент для проверки коммитов