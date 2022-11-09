#include <stdio.h>

int main()
{
    int T;  scanf("%d", &T);
    int k, n;

    for(int i = 0; i < T; i++)
    {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 ,14};
        scanf("%d %d", &k, &n);
        for(int j = 0; j < k; j++)
        {
            for(int a = n - 1; a >= 1; a--)
            {
                for(int b = a - 1; b >= 0; b--)
                {
                    arr[a] += arr[b];
                }
            }
        }
        printf("%d\n", arr[n - 1]);
    }

    return 0;
}