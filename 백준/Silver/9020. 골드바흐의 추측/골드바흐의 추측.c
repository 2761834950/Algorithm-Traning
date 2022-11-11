#include <stdio.h>
#include <math.h>

enum{
    PRIME = 0,
    NOT_PRIME = 1
};

#define MAX 10001
int arr[MAX] = {[0] = NOT_PRIME, [1] = NOT_PRIME};

int main()
{
    for(int i = 2; i <= 10000; i++)
    {
        for(int j = i * i; j <= 10000; j += i)
        {
            arr[j] = NOT_PRIME;
        }
    }
        
    // for(int i = 0; i <= 100; i++)
    // {
    //     printf("%d %d\n", i, arr[i]);
    // }


    int T; scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        int n; scanf("%d", &n);

        int num1, num2;
        for(num1 = n / 2, num2 = n / 2; num1 > 0; num1--, num2++)
        {
            if(arr[num1] == PRIME && arr[num2] == PRIME)
            {
                printf("%d %d\n", num1, num2);
                break;
            }
        }
    }

    return 0;
}