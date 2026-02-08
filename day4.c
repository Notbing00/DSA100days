#include <stdio.h>

int main() 
{
    int n, k;
    int arr[100];
    int found = 0;
    int comparisons = 0;

    // input size
    scanf("%d", &n);

    // input array
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // input key
    scanf("%d", &k);

    // linear search
    for (int i = 0; i < n; i++) 
    {
        comparisons++;
        if (arr[i] == k) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0) 
    {
        printf("Not Found\n");
    }

    printf("Comparisons = %d", comparisons);

    return 0;
}
