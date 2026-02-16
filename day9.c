//Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.
#include <stdio.h>
#include <string.h>

// recursive function
void reverse(char str[], int index)
{
    // base case
    if (index < 0)
        return;

    // print current character
    printf("%c", str[index]);

    // recursive call
    reverse(str, index - 1);
}

int main()
{
    char str[100];

    // input
    scanf("%s", str);

    int length = strlen(str);

    // function call
    reverse(str, length - 1);

    return 0;
}

