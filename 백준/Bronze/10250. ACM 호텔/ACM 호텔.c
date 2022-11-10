#include <stdio.h>

int hotel(int num, int N, int H)
{
    if(N % H == 0)
    {
        num += H * 100;
        num += N / H - 1;
    }
    else
    {
        num += N % H * 100;
        num += N / H;
    }

    return num;
}

int main()
{
    int T;  scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        int H, W, N;  scanf("%d %d %d", &H, &W, &N);

        int num = 1;

        printf("%d\n", hotel(num, N, H));
    }

    return 0;
}