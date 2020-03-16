#include<stdio.h>
int main()
{
    char n;
    int vow=0,cons=0;

    while(1){
        fflush(stdin);
        scanf("%c",&n);
        if(n=='0')
            break;
        if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u' || n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
            vow=vow+1;
        else
            cons=cons+1;
    }
    printf("Vowel: %d\n",vow);
    printf("Consonant: %d", cons);
}
