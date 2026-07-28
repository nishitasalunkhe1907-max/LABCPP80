#include <stdio.h>

int main()
{
    int arr[4], i, sum = 0;

    printf("Enter 4 elements:\n");

    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 4; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}