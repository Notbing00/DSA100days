#include <stdio.h>

int main()
{
    int m, n;

    // read dimensions
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], result[m][n];

    // read first matrix
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // read second matrix
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // add matrices
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    // print result matrix
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
