#include <stdio.h>

int main()
{
    int i, j, k;
    k = 11;

    for (i = 1; i <= 4; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}