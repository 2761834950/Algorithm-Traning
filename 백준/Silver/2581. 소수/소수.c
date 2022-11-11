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
    for(int i = 2; i <= sqrt(N); i++)
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
    int N, M;  scanf("%d %d", &N, &M);

    int sum = 0;
    int min = M;
    for(int i = N; i <= M; i++)
    {
        if(is_prime(i) == PRIME)
        {
            sum += i;
            if(i < min)
            {
                min = i;
            }
        }
    }

    if(sum == 0)
    {
        printf("%d", -1); 
    }
    else
    {
        printf("%d\n%d", sum, min);
    }
} 
