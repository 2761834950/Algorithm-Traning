#include <stdio.h>
#include <math.h>

enum{
    PRIME,
    NOT_PRIME
};

int main()
{
    int arr[300000] = {[0] = NOT_PRIME, [1] = NOT_PRIME,};

    while(1)
    {    
        int N;  scanf("%d", &N);
        if(N == 0)
        {
            break;
        }

        int lim = (int) sqrt(2 * N);
        for(int i = 2; i <= lim; i++)
        {
            for(int j = i * i; j <= 2 * N; j += i)
            {
                arr[j] = NOT_PRIME;
            }
        }

        int cnt = 0;
        for(int i = N + 1; i <= 2 * N; i++)
        {
            if(arr[i] == PRIME)
            {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }


    return 0;
} 
