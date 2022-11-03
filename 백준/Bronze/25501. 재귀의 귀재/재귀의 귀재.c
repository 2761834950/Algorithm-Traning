#include <stdio.h>
#include <string.h>

int cnt;

int recursion(const char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int T;  scanf("%d", &T);

    char testcase[1000];

    for(int i = 0; i < T; i++)
    {
        scanf("%s", testcase);
        cnt = 0;
        int ret = isPalindrome(testcase);
        printf("%d %d\n", ret, cnt);
    }
}