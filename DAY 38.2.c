//Add two matrices.
#include<stdio.h>
 int main(){
    int matrix_A[2][2];
    int matrix_B[2][2];
    int matrix_C[2][2];
    int i,j;
    int row_sum[2];
    printf("enter the elements of matrix A:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        scanf("%d",&matrix_A[i][j]);
    }
}
   
    printf("enter the elements of matrix B:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        scanf("%d",&matrix_B[i][j]);
    }
 }

    printf("\nMatrix a is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d ",matrix_A[i][j]);
    }
    printf("\n");
}
 printf("\nMatrix a is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d ",matrix_B[i][j]);
    }
    printf("\n");
 }
 printf("matrix c is:\n"); // matrix c will be resultant sum of both the matrix a and b.
 for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
        printf("%d ",matrix_C[i][j]);
    }
    printf("\n");
 }
return 0;
}
