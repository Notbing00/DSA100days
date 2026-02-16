#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // read matrix
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // check square matrix
    if(m != n)
    {
        printf("Not a Symmetric Matrix");
        return 0;
    }

    // check symmetric condition
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                printf("Not a Symmetric Matrix");
                return 0;
            }
        }
    }

    printf("Symmetric Matrix");

    return 0;
}
