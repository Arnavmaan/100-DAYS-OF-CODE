// Perform diagonal traversal of a matrix.

#include <stdio.h>
int main()
{
    int matrix_A[3][3];
    int i, j;
    printf("enter the elements of matrix A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf("%d", &matrix_A[i][j]);
        }
    }

    printf("\nmatrix  a is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

            printf("%d ", matrix_A[i][j]);

        printf("\n");
    }
    printf("primary diagonal is: ");
    for (i = 0; i < 3; i++)
    {

        printf("%d ", matrix_A[i][i]);
    }
    printf("secondary diagonal is: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", matrix_A[i][2 - i]);
    }
    return 0;
}