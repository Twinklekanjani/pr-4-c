#include<stdio.h>

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int k = 1; k <= i ; k++)
        {
            printf("  ");
        }

        for(int j = 1; j <= 6-i; j++)
        {

            if (j % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }

        printf("\n");
    }

    return 0;
}