// Check if a matrix is symmetric.
//concept of symmetric matrix = if a matrix = a(transpose matrix).
#include <stdio.h>
int main()
{
    int matrix_A[2][2];
    int i, j;
    int row_sum[2];
    int issymmetric = 0; //defining factor, default set to zero
    printf("enter the elements of matrix A:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &matrix_A[i][j]);
        }
    }
    printf("\nMatrix A is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", matrix_A[i][j]);
        }
        printf("\n");
    }
    int transpose_matrix[2][2];
    printf("transpose Matrix  is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transpose_matrix[i][j] = matrix_A[j][i];
            printf("%d ", transpose_matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            matrix_A[i][j] = transpose_matrix[i][j];
            issymmetric = 1;
        }
    }
    if (issymmetric == 1)
    {
        printf("matrix_A is a symmetric matrix");
    }
    else
    {
        printf("matrix_A is a non symmetric matrix");
    }

    return 0;
}