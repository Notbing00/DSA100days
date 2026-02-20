#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    long long prefix = 0;
    long long count = 0;

    // Use large enough hash array range
    // For simplicity assuming prefix won't exceed ±100000
    int offset = 100000;
    long long freq[200001] = {0};

    freq[offset] = 1;  // prefix sum 0 initially

    for(int i = 0; i < n; i++) {
        prefix += arr[i];

        if(freq[prefix + offset] > 0)
            count += freq[prefix + offset];

        freq[prefix + offset]++;
    }

    printf("%lld", count);

    return 0;
}