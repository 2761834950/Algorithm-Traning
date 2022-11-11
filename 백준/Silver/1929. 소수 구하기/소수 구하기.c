#include <stdio.h>
#include <math.h>

enum{
    PRIME,
    NOT_PRIME
};

int is_prime(int N)
{
    if(N == 1)
    {
        return NOT_PRIME;
    }
    int lim = sqrt(N);
    for(int i = 2; i <= lim; i++)
    {
        if (N % i == 0)
        {
            return NOT_PRIME;
        }
    }
    return PRIME;
}

int main()
{
    int M, N;  scanf("%d %d", &M, &N);

    for(int i = M; i <= N; i++)
    {
        if(is_prime(i) == PRIME)
        {
            printf("%d\n", i);
        }
    }
} 
