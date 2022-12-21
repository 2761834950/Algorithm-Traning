#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int arr[100] = {0};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", arr + i);
    }

    int v;
    scanf("%d", &v);

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (v == arr[i])
        {
            cnt++;
        }
    }
    
    printf("%d", cnt);
}