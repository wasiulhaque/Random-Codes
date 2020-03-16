#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    int i=1;
    while(n>1)
    {
        fact=fact*n;
        n--;

    }

    return fact;
}


int main()
{
    int n,i,r,v,j;
    int k=0;

    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            while(k!=(n-i))
            {
                printf(" ");
                k++;
            }
            v=(factorial(i))/(factorial(j)*factorial(i-j));
            printf("%d ",v);
        }
        k=0;
        printf("\n");
    }
}
