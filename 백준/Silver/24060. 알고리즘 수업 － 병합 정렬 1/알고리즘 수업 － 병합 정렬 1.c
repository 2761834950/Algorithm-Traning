#include <stdio.h>

int cnt = 0;

int A[500000] = {0};
int tmp[500000] = {0};

// A[p..q]와 A[q+1..r]을 병합하여 A[p..r]을 오름차순 정렬된 상태로 만든다.
// A[p..q]와 A[q+1..r]은 이미 오름차순으로 정렬되어 있다.
void merge(int A[], int p, int q, int r, int N, int K) 
{
    int i = p, j = q + 1, t = 1;

    while (i <= q && j <= r) {
        if (A[i] <= A[j]) tmp[t++] = A[i++]; // tmp[t] = A[i]; t++; i++;
        else tmp[t++] = A[j++]; // tmp[t] = A[j]; t++; j++;
    }
    while (i <= q)  // 왼쪽 배열 부분이 남은 경우
        tmp[t++] = A[i++];
    while (j <= r)  // 오른쪽 배열 부분이 남은 경우
        tmp[t++] = A[j++];

    i = p, t = 1;
    while (i <= r)
    {
        cnt++;
        if(cnt == K)
        {
            printf("%d", tmp[t]);
        }
        else
        {
            A[i++] = tmp[t++];  // 결과를 A[p..r]에 저장
            // for(int i = 0; i < N; i++)  printf("%d ", A[i]);
            // printf(" %d\n", cnt);
        }
    }
}

void merge_sort(int A[], int p, int r, int N, int K) //A[p..r]을 오름차순 정렬한다.
{
    if (p < r) 
    {
        int q = (p + r) / 2;      // q는 p, r의 중간 지점
        merge_sort(A, p, q, N, K);      // 전반부 정렬
        merge_sort(A, q + 1, r, N, K);  // 후반부 정렬
        merge(A, p, q, r, N, K);        // 병합
    }
}

int main()
{
    int N, K;  scanf("%d %d", &N, &K);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    merge_sort(A, 0, N - 1, N, K);

    if(cnt < K)
    {
        printf("%d", -1);
    }
}