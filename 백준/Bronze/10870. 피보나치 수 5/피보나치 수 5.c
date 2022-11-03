#include <stdio.h>

int fibonazzi(int N, int prev0, int prev1)
{
    if (N == 0)
    {
        return prev0;
    }
        
    else if (N == 1)
    {
        return prev1;
    }
    
    else 
    {
        return fibonazzi(N - 1, prev1, prev1 + prev0);
    }
}

int main()
{
    int N;  scanf("%d", &N);

    printf("%d", fibonazzi(N, 0, 1));

    return 0;
}