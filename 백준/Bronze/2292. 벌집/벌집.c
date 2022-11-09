#include <stdio.h>

int main()
{
    int N = -1;  
    scanf("%d", &N);
    int cnt = 0;
    while(N - 2 >= 6 * (cnt))
    {
        N -= 6 * (cnt++);
    }
    printf("%d\n", cnt + 1);
    
    return 0;
}