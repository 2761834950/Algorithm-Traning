#include <stdio.h>
#include <math.h>

void hanoi(int n, int from, int to, int by)
{   
    if (n == 1)
    {
        printf("%d %d\n", from, to);
    }
    else
    {
        hanoi(n - 1, from, by, to);
        hanoi(1, from, to, by);
        hanoi(n - 1, by, to, from);
    }
}

int main()
{
    int from = 1, by = 2, to = 3;
    
    int n;  scanf("%d", &n);

    printf("%d\n", (int) pow(2, n) - 1);
    
    hanoi(n, from, to, by);

    return 0;
}   
