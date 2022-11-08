#include <stdio.h>

int main()
{
    int A, B, V;  scanf("%d %d %d", &A, &B, &V);

    if(V <= A)
    {
        printf("%d ", 1);
    }
    else
    {
        printf("%d", (V - B - 1) / (A - B) + 1);
    }

    return 0;
}