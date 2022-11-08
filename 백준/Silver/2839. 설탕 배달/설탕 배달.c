#include <stdio.h>

int main()
{
    int N;  scanf("%d", &N);
    
    int cnt_5 = N / 5;
    int cnt_3 = N / 3;
    
    int a = 1;
    
    for(int i = 0; i <= cnt_3; i++)
    {
        for(int j = cnt_5; 0 <= j; j--)
        {
            if(3 * i + 5 * j == N)
            {
                printf("%d", i + j);
                i = cnt_3;
                a = 0;
                break;
            }
        }
    }
    
    if(a)
    {
        printf("%d", -1);
    }
    
    return 0;
}