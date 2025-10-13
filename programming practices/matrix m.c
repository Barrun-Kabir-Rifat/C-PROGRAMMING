
#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], result[3][3], i, j, k, sum;

    // Input matrix A
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // Input matrix B
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    // Print matrix A
    printf("Matrix A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d]  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Print matrix B
    printf("Matrix B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d]  ", b[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0; // Initialize sum to zero
            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            result[i][j] = sum;
        }
    }

    // Print result matrix
    printf("\nMatrix A * B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d]  ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
