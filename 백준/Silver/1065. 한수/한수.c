#include <stdio.h>

int main()
{
    int arr[5] = {0};

    int N; scanf("%d", &N);
    int cnt_global = 0;

    for(int i = 1; i <= N; i++)
    {
        if(i <= 99)
        {
            cnt_global++;
        }
        else
        {
            int N = i;
            int cnt = 0;
            while(N > 0)
            {
                arr[cnt++] = N % 10;
                N /= 10;
            }

            // for(int j = 0; j <= cnt - 1; j++)
            // {
            //     printf("%d ", arr[j]);
            // }
            // printf("\n");

            int flag = 0;
            for(int j = 0; j < cnt - 2; j++)
            {
                if(arr[j] - arr[j + 1] != arr[j + 1] - arr[j + 2])
                {
                    flag = 1;
                }
            }
            if(flag != 1)
            {
                cnt_global++;
            }
        }
    }

    printf("%d", cnt_global);

    return 0;
}