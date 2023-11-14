﻿#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    /**
     * @brief Л/р 5 Одномерные массивы
     * Вариант 21
     * Дан массив размера N. Найти номера тех элементов массива,
     * которые больше своего правого соседа, и количество таких элементов.
     * Найденные номера выводить в порядке их возрастания.
     * Ввод значений массива производится с клавиатуры.
    */
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите размер массива "; cin >> n;
    //Массив
    int *mas = new int[n];
    int k = 0;
    for (int i = 0; i < n; i++) {
        cout << "элемент массива номер " << i << ":";
        cin >> mas[i];
    }
    cout << "Подходящие под условие номера элементов ";
    for (int i = 0; i < n-1; i++) {
        if (mas[i] > mas[i + 1]) {
            cout << i << " ";
            k = k + 1;
        }

    }
    cout << endl << "количество подходящих элементов " << k;
}
