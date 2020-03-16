#include <stdio.h>

int main()

{
    int arr[101],i,j,count=0,temp,length;
    int unique[101],newarr[101];
    for(i=0;i<101;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<1)
            break;
    }
    length=i;
    for(i=0;i<100;i++)
    {
        temp=arr[i];
        if(arr[i]!=0)
        {
            for(j=0;j<length;j++)
            {
                if(temp==arr[j])
                {
                    arr[j]=0;
                    count++;
                }
            }
        }
        if(count)
            printf("%d occurs %d times\n",temp,count);
        count=0;
    }


    for(i=0;i<100;i++)
    {
        for(j=i+1;j<100;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
    }

    return 0;
}

