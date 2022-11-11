#include <stdio.h>
#include <math.h>

int main()
{
    int N;  scanf("%d", &N);
    if(N == 1)
    {
        return 0;
    }

    int lim = (int) sqrt(N);
    for(int i = 2; i <= lim; i++)
    {
        if(N % i == 0)
        {
            while(N % i == 0)
            {
                printf("%d\n", i);
                N /= i;
            }
        }
    }
    if(N != 1)
    {
        printf("%d", N);
    }

    return 0;
} 
