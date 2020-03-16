#include<stdio.h>
#include<math.h>
#define N 1000010
int flag[N], primes[N], total;
int main()
{
    int n;
    int i, j, val = sqrt(N) + 1;

    for(i = 4; i < N; i += 2)
        flag[i] = 1;

    for(i = 3; i < val; i += 2)
    {
        if(!flag[i])
        {
            for(j = i*i; j < N; j += 2*i)
                flag[j] = 1;
        }
    }
    for(i = 2; i < N; i++)
    {
        if(!flag[i])
            primes[++total] = i;
    }
    scanf("%d",&n);
    printf("%d", primes[n]);
}
