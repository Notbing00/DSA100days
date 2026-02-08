//Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    if(n == 0)
        return 0;

    int write = 1;

    for(int read = 1; read < n; read++)
    {
        if(nums[read] != nums[write - 1])
        {
            nums[write] = nums[read];
            write++;
        }
    }

    // print unique elements
    for(int i = 0; i < write; i++)
        printf("%d ", nums[i]);

    return 0;
}
