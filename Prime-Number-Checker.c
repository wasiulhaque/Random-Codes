#include<stdio.h>
int main()
{
    int n,rem,flag=0,i;
    scanf("%d", &n);
    if(n==2)
        printf("The number is prime");
    else
    {
        for(i=2; i<=(n/2); i++)
        {
            rem=n%i;
            if(rem==0)
                flag=1;
        }
        if(flag==0)
            printf("The number is prime");
        else if(flag==1)
            printf("The number is not prime");
    }

    return 0;
}
