// Вылетков Ярослав - лабораторная работа №4
// 7. Напишите  программу для определения младшего нибла двоичного разложения целого числа.

#include<stdio.h>
int main()
{
    int num, i;
    printf("Введите число: "); scanf("%d", &num);

    for (i=3;i>=0;i--)
        printf("%d",(num>>i)&0x1);
}