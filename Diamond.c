#include <stdio.h>
int main()

{
    int i, j, size;

    printf("Enter the size of your diamond: ");
    scanf("%d", &size);

    for(i=1; i<=size; i++)
    {
        for(j=i; j<=size; j++)
        {
            printf("*");
        }

        for(j=1; j<=(2*i-1); j++)
        {
            printf(" ");
        }

        for(j=i; j<=size; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=2; i<=size; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=(2*i-1); j<(2*size); j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

