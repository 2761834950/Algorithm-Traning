#include <stdio.h>
#include <string.h>

int main()
{
    int arrA[12345] = {0};
    int arrB[12345] = {0};

    char strA[12345];
    char strB[12345];

    scanf("%s %s", strA, strB);
    int len;
    (strlen(strA) > strlen(strB)) ? (len = strlen(strA)) : (len = strlen(strB));

    for(int i = 0; i < strlen(strA); i++)
    {
        arrA[12345 - 1 - i] = (int) strA[strlen(strA) - 1 - i] - 48;
    }
    for(int i = 0; i < strlen(strB); i++)
    {
        arrB[12345 - 1 - i] = (int) strB[strlen(strB) - 1 - i] - 48;
    }

    for(int i = 12344; 12344 - len < i; i--)
    {
        arrA[i] = arrA[i] + arrB[i];
        if(arrA[i] >= 10)
        {
            arrA[i - 1]++;
            arrA[i] -= 10;
        }
    }
    
    if(arrA[12345 - len - 1] == 1)
    {
        len++;
    }
    for(int i = 12345 - len; i < 12345; i++)
    {
        printf("%d", arrA[i]);
    }
} 
