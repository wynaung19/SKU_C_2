#include <stdio.h>
#define SIZE 10

int main(void)
{
    int list[SIZE] = { 2, 9, 7, 1, 4, 8, 3, 6, 5, 0 };
    int i, j, least, temp;

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n\n");

    for (i = 0; i < SIZE - 1; i++)
    {
        least = i;
        for (j = i + 1; j < SIZE; j++)
        {
            if (list[j] < list[least])
            {
                least = j;
            }
        }
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;

        for (j = 0; j < SIZE; j++)
        {
            printf("%d ", list[j]);
        }
        printf("\n");
    }

    printf("\nSorted :\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}