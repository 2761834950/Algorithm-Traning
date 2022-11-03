#include <stdio.h>

char arr[6561][6561];

void fractal(int N, int i, int j)
{
    if (N == 3)
    {
        for(int n = i - 1; n <= i + 1; n++)
        {
            for(int m = j - 1; m <= j + 1; m++)
            {
                if(n != i || m != j)
                {
                    arr[n][m] = '*';
                }
            }
        }
    }

    else
    {
        for(int n = i - (N / 3); n <=  i + (N / 3); n += (N / 3))
        {
            for(int m = j - (N / 3); m <= j + (N / 3); m += (N / 3))
            {
                if(n != i || m != j)
                {
                    fractal(N / 3, n, m);
                }
            }
        }
    }
}

int main()
{
    int N;  scanf("%d", &N);

    fractal(N, N / 2, N / 2);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(arr[i][j] != '*')
            {
                printf("%c", ' ');
            }
            else
            {
                printf("%c", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}