#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {

        n = get_int("Height: ");
    } while (n < 1 || n > 8);

    for (int m = 0; m < n; m++)
    {

        for (int s = n - 1; s > m; s--)
                printf(" ");


        for (int s = 0; s <= m; s++)
            printf("#");
        printf("\n");
    }
