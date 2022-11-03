#include <stdio.h>

int factorial(int N, int sum)
{
    if (N > 1) return factorial(N - 1, sum * N); return sum;
}

int main()
{
    int N;  scanf("%d", &N);

    printf("%d", factorial(N, 1));

    return 0 ;
}