//Problem: Given an array of integers, rotate the array to the right by k positions.
#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d", &n);

    int arr[n], result[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // important when k > n
    k = k % n;

    // copy last k elements
    for(int i = 0; i < k; i++)
    {
        result[i] = arr[n - k + i];
    }

    // copy remaining elements
    for(int i = 0; i < n - k; i++)
    {
        result[k + i] = arr[i];
    }

    // print result
    for(int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}
