#include<stdio.h>
int main ()
{
    int i,j,k,count_x=0,count_o=0;
    char arr[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf(" %c",&arr[i][j]);
        }
    }
    if((arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') || (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X'))
    {
        printf("Player 1 wins");
        return 0;
    }
    if((arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O') || (arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O'))
    {
        printf("Player 2 wins");
        return 0;
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(arr[i][j]=='X')
                count_x++;
            if(arr[i][j]=='O')
                count_o++;
        }
        if(count_x==3)
        {
            printf("Player 1 wins");
            return 0;
        }
        else
        {
            count_x=0;
        }
        if(count_o==3)
        {
            printf("Player 2 wins");
            return 0;
        }
        else
        {
            count_o=0;
        }
    }
    for(j=0; j<3; j++)
    {
        for(i=0; i<3; i++)
        {
            if(arr[i][j]=='X')
                count_x++;
            if(arr[i][j]=='O')
                count_o++;
        }
        if(count_x>=3)
        {
            printf("Player 1 wins");
            return 0;
        }
        else
        {
            count_x=0;
        }
        if(count_o>=3)
        {
            printf("Player 2 wins");
            return 0;
        }
        else
        {
            count_o=0;
        }
    }
    printf("Draw");
    return 0;
}
