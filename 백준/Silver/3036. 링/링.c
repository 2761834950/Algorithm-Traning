#include <stdio.h>

int GCD(int n, int m)
{
    if(m == 0) return n;
    else return GCD(m, n % m);
}

int main(void)
{
    int N;  scanf("%d", &N);

    int ring[100] = {0};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ring[i]);
    }

    for (int i = 1; i < N; i++)
    {
        int num = GCD(ring[0], ring[i]);
        printf("%d/%d\n", ring[0]/num, ring[i]/num);
    }

    return 0;
}