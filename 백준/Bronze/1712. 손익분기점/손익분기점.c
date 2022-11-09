#include <stdio.h>

int main()
{
    unsigned int A, B, C;  scanf("%u %u %u", &A, &B, &C);
    
    if(B >= C)
    {
        printf("%d", -1);
        return 0;
    }
    else
    {
        C = C - B;
        printf("%u", A / C + 1);
    }

    return 0;
}