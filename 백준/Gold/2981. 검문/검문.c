#include <stdio.h>
#include <math.h>

int gcd(int N, int M)
{
    if(M == 0)
    {
        return N;
    }
    else
    {
        return gcd(M, N % M);
    }
}

void bubblesort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
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

    int arrA[100] = {0};

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arrA[i]);
    }
    
    bubblesort(arrA, N);

    int GCD_M = arrA[1] - arrA[0];
    for(int i = 1; i < N - 1; i++)
    {
        GCD_M = gcd(GCD_M, arrA[i + 1] - arrA[i]);
    }

    int cnt = 1;
    int arrB[10000] = {1};
    for(int i = 2; i <= sqrt(GCD_M); i++)
    {
        if(GCD_M % i == 0)
        {
            arrB[cnt++] = i;
            printf("%d ", i);
        }
    }

    for(int i = cnt - 1; i >= 0; i--)
    {
        if(arrB[cnt - 1] == GCD_M / arrB[i])
        {
            continue;
        }
        printf("%d", GCD_M / arrB[i]);
        if(i != 0)
        {
            printf(" ");
        }
    }
    
    return 0;
}