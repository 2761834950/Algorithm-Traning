#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    while(num1 != 0)
    {
        if(num2 % num1 == 0)
        {
            printf("factor\n");
        }
        else if(num1 % num2 == 0)
        {
            printf("multiple\n");
        }
        else
        {
            printf("neither\n");
        }
            
        scanf("%d %d", &num1, &num2);
    }

    return 0;
}