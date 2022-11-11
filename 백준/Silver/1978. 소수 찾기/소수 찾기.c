#include <stdio.h>

enum{
    PRIME,
    NOT_PRIME
};

int is_prime(int N)
{
    for(int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            return NOT_PRIME;
        }
    }
    if(N == 1)
    {
        return NOT_PRIME;
    }
    return PRIME;
}

int main()
{
    int N;  scanf("%d", &N);

    int cnt = 0;
    int num;
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if(is_prime(num) == PRIME)
        {
            cnt++;
        }
    }

    printf("%d", cnt);
} 
