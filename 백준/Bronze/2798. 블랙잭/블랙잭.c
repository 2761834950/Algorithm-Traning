#include <stdio.h>

int main(void)
{
    int N, M;  scanf("%d %d", &N, &M);

    int card[100] = {0};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &card[i]);
    }

    int sum = 0;
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int temp = card[i] + card[j] + card[k];
                // printf("%d %d %d ", card[i], card[j], card[k]);
                if (temp <= M && sum < temp)
                {
                    sum = temp;
                }
                // printf("%d %d\n", temp, sum);
            }   
        }
    }
    
    printf("%d", sum); 

    return 0;
}