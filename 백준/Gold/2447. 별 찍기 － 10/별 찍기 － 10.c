#include <stdio.h>

char arr[6561][6561] = {0};

void fractal(int N, int i, int j)
{
    if (N == 3)
    {
        arr[i - 1][j - 1] = '*';
        arr[i - 1][j] = '*';
        arr[i - 1][j + 1] = '*';
        arr[i][j - 1] = '*';
        arr[i][j + 1] = '*';
        arr[i + 1][j - 1] = '*';
        arr[i + 1][j] = '*';
        arr[i + 1][j + 1] = '*';
    }

    else
    {
        fractal(N / 3, i - (N / 3), j - (N / 3));
        fractal(N / 3, i - (N / 3), j);
        fractal(N / 3, i - (N / 3), j + (N / 3));

        fractal(N / 3, i, j - (N / 3));
        fractal(N / 3, i, j + (N / 3));

        fractal(N / 3, i + (N / 3), j - (N / 3));
        fractal(N / 3, i + (N / 3), j);
        fractal(N / 3, i + (N / 3), j + (N / 3));
    }
}

int main()
{

    int N;  scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            arr[i][j] = ' ';
        }
    }

    fractal(N, N / 2, N / 2);


    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}   