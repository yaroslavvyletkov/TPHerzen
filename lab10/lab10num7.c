// лаба 10 задание 7
//     7. Замените все положительные элементы массива A[6] нулями.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define N 5

int main() {
    int A[N+1];
    int i;
    srand(time(NULL));
    for (i = 0; i <= N; i++)
    {
        A[i] = -99 + rand() % 99 + rand() % 99;
        printf("изначальный элемент А[%d]: %d\n", i, A[i]);
        if (A[i] > 0)
            A[i] = 0;
        printf("   конечный элемент А[%d]: %d\n", i, A[i]);
    }
}
