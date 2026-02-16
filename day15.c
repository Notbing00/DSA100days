#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // input matrix
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    // sum primary diagonal
    for(int i = 0; i < m && i < n; i++)
    {
        sum += matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}
