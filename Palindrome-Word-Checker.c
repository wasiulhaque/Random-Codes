#include <stdio.h>
int main()
{
    char a[100];
    int i,j,count=0,flag=0;

    for (i=0; i<100; i++)
    {
        count++;
        scanf (" %c",&a[i]);
        if  (a[i]<'a'||a[i]>'z')
            break;
    }

    for (i=0,j=count-2; i<count-1; i++,j--)
    {
        if (a[i]!=a[j])
        {
            flag=1;
            break;
        }

    }

    if (flag==1)

        printf ("Not Palindrome");


    else

        printf ("Palindrome");

    return 0;
}
