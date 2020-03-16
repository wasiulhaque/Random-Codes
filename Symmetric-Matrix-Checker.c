#include<stdio.h>
int main ()
{
    int ara[100][100],ara1[100][100],n,i,j,temp=0;
    printf("Enter Dimension: ");
    scanf ("%d",&n);
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf ("%d", &ara [i][j]);
        }
    }

    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            ara1[i][j]=ara[j][i];
        }
    }
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (ara[i][j]==ara1[i][j])
                temp++;
        }
    }
    if (temp==n*n)
        printf ("The Matrix is symmetric");
    else
        printf ("The Matrix is NOT symmetric");
    return 0;
}
