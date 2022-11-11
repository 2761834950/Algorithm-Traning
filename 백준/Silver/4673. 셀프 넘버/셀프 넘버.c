#include <stdio.h>

enum{
    SELF,
    NOT_SELF
};

int arr[10200] = {0};

int d(int n)
{
    if(n > 10000)
    {
        return 0;
    }
    else
    {
        int d_n = n;

        while(n % 10 >= 0 && n != 0)
        {
            d_n += n % 10;
            n /= 10;
        }

        arr[d_n] = NOT_SELF;

        return d(d_n);
    }
}

int main()
{    
    for(int i = 1; i <= 10000; i++)
    {
        if(arr[i] == SELF)
        {
            d(i);
            printf("%d\n", i);
        }
    }

    return 0;
}