#include <stdio.h>
#include <math.h>

enum{
    PRIME = 0,
    NOT_PRIME = 1
};

#define MAX 1000001
int arr[MAX] = {[0] = NOT_PRIME, [1] = NOT_PRIME};

int main()
{
    int M, N;  scanf("%d %d", &M, &N);

    int lim = (int) sqrt(MAX);
    for(int i = 2; i <= (int) sqrt(MAX); i++)
    {
        for(int j = i * i; j <= MAX; j += i)
        {
            arr[j] = NOT_PRIME;
        }
    }

    for(int i = M; i <= N; i++)
    {
        if(arr[i] == PRIME)
        {
            printf("%d\n", i);
        }
    }
}
