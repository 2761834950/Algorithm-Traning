#include <stdio.h>

int main()
{
    int X; scanf("%d", &X);

    int cnt = 1;
    while(X > cnt)
    {
        X -= cnt++;
    }
    if(cnt % 2 == 0)
    {
        printf("%d/%d", X, cnt + 1 - X);
    }
    else
    {
        printf("%d/%d", cnt + 1 - X, X);
    }
} 
