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

    int GCD = arrA[1] - arrA[0];
    for(int i = 1; i < N - 1; i++)
    {
        GCD = gcd(GCD, arrA[i + 1] - arrA[i]);
    }

    for(int i = 2; i < sqrt(GCD); i++)
    {
        if(GCD % i == 0)
        {
            printf("%d ", i);
        }
    }
    for(int i = sqrt(GCD); i >= 1; i--)
    {
        if(GCD % i == 0)
        {
            printf("%d ", GCD / i);
        }
    }
    
    return 0;
}