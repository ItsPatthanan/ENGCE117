#include <stdio.h>
int main()
{
    int Max = 0, num_i = 0, i;
    for (i = 0; i < 10; i++)
    {
        printf("Input number: ");
        scanf("%d", &num_i);
        if (num_i >= Max) Max = num_i;
    }
    printf("maximum: %d", Max);
}