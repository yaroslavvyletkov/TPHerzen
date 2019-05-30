// лаба 3(2) задание 1(2(1))
// Напишите программу, которая позволяет сгенерировать:
// (1) 8 случайных вещественных чисел ni, где 0,ni<1;

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
    double num;
    int i;
    srand(time(NULL));
    for (i=1;i<=8;i++)
    {
        num = (double)rand() / ((double)rand() + 0.1);
        printf("Воть:   %f ", num - floor(num));
        printf("  (num = %f)\n", num);
    }
    printf("------- Сделано!\n");
}