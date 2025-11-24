// Find the sum of all elements in a matrix.
#include<stdio.h>
 int main(){
    int matrix_A[2][2];
    int i,j,sum=0;
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
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum = sum + matrix_A[i][j]; // add element to sum
        }
    }
    
    printf("Sum of all elements = %d", sum);
 return 0;
 }