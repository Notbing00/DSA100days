//Problem: Given integers a and b, compute a^b using recursion without using pow() function.

#include <stdio.h>

// recursive function
int power(int a, int b)
{
    // base case
    if (b == 0)
        return 1;

    // recursive case
    return a * power(a, b - 1);
}

int main()
{
    int a, b;

    // input
    scanf("%d %d", &a, &b);

    // function call and output
    printf("%d", power(a, b));

    return 0;
}
