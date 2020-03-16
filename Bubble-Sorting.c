#include<stdio.h>
int main()
{
    int list[10]={3,12,5,2,7,9,3,12,4,9};
    int i,step,temp;

    for(step=0;step<10;++step)
    {
        for(i=0;i<10-step;++i)
        {
            if(list[i]>list[i+1])
            {
                temp=list[i];
                list[i]=list[i+1];
                list[i+1]=temp;
            }
        }
    }
    for(i=0;i<10;++i)
        printf("%d ", list[i]);

    return 0;
}
