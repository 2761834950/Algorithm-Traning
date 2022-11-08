#include <stdio.h>

int gcd(int N, int M)
{   
    if (M == 0)
    {
        return N;
    }
    else
    {
        return gcd(M, N % M);
    }

    return 0;
}

int main()
{
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);

    int num = gcd(N, M);

    printf("%d\n", num);
    printf("%d", N * M / num);
}   
