//Find the transpose of a matrix.
#include<stdio.h>
 int main(){
    int matrix_A[2][2];
    int i,j;
    int row_sum[2];
    printf("enter the elements of matrix A:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        scanf("%d",&matrix_A[i][j]);
    }
}
    printf("\nMatrix a is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d ",matrix_A[i][j]);
    }
    printf("\n");
}
int transpose_matrix[2][2];
    printf("\n transpose Matrix  is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            transpose_matrix[i][j] = matrix_A[j][i] ;
        printf("%d ",transpose_matrix[i][j]);
    }
    printf("\n");
}
return 0;
}