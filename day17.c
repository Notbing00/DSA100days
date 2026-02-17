#include <stdio.h>

int main()
{
    int a[]={3,45,6,3,7};
    int max, min, i;

    max = a[0];
    min = a[0];

    for(i=1; i<5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d", min);

    return 0;
}
