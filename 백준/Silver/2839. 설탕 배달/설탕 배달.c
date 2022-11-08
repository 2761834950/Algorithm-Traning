#include <stdio.h>

int main()
{
    int N;  scanf("%d", &N);

    int cnt = 0;

    while(1)
    {
        if(N % 5 == 0)
        {
            cnt += N / 5;
            printf("%d", cnt);
            break;
        }

        if(N < 0)
        {
            printf("%d", -1);
            break;
        }
        else if(N == 0)
        {
            printf("%d", cnt);
            break;
        }
        
        N -= 3;  cnt++;
    }

    return 0;
}