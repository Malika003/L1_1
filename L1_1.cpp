// L1_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Задача 1/5. Даны числа А, В, Сю ВЕрно ли, что В - наибольшее число?
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Input numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (b > a) {
        if (b > c) {
            printf("yes");
        }
        else {
            printf("no");

        }

    }
    else {
        printf("no");
    }
}

