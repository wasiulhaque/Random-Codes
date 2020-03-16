#include<stdio.h>
int prime(int n)
{
    int i,flag=1;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }

    }
    if(flag)
        return 1;
    else
        return 0;
}

int main()
{
    int input,i,j,flag=1,t;
    while(1)
    {
        scanf("%d",&input);
        if(!input)
            break;
        else
        {
            for(i=3; i<input-3; )
            {
                for(j=input-3; j>3; j--,i++)
                {
                    if(input==i+j && prime(i) && prime(j))
                    {
                        printf("%d = %d + %d\n", input, i, j);
                        flag = 0;
                        break;
                    }
                }
                if(!flag)
                    break;
            }
        }
        if(flag)
            printf("Conjecture is wrong\n");
        flag=1;

    }



    return 0;
}


