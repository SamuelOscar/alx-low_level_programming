#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether a random number is positive, negative or zero
 * Return: 0 on success
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        printf("%d is ", n);
        if (n > 0)
        {
                printf("positive\n");
        }
        else if (n == 0)
        {
                printf("zero\n");
        }
        else
        {
                printf("negative\n");
        }

        return (0);
}
