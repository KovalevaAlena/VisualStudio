/*Задание 1. Вывести через пробел все целые числа из промежутка [A,B], (A<B) в обратном порядке: от B до A.
Входные данные: Два целых числа A, B при этом A<B.
Выходные данные: Целые числа из промежутка от [A,B], записанные через пробел в обратном порядке.
*/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Введите A и B через пробел(A < B):");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        for(b;b >= a; b--)
        printf("%d ", b);
    }

    return 0;
}
