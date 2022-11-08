#include <stdio.h>

void bubblesort(int arr[], int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - (1 + i); j++)
        {
            //printf("%d %d\n", i, j);
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    }
}

int main()
{
    int N;  scanf("%d", &N);
    int arr[50] = {0};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubblesort(arr, N);

    printf("%d", arr[0] * arr[N - 1]);

    return 0;
}