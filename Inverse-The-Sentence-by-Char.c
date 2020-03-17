#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[100],t[100],rev;
    int i,n,j=0,c=0,k;
    printf("Enter the sentence: ");
    gets(a);
    fflush(stdin);
    n=strlen(a);
    for(i=0,j=0;j<n;j++){
        if((j==n-1) || (!isalnum(a[j]))){
            if(j<n-1){
                k=j-1;
            }
            else{
                k=j;
            }
            for(;i<k;){
                rev=a[i];
                a[i]=a[k];
                a[k]=rev;
                i++;
                k--;
            }
            i=j+1;
        }
    }
    puts(a);
    return 0;
}
