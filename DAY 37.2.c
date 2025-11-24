//Find the sum of each row of a matrix and store it in an array.
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
   printf("sum of elements of first row is: ");
   for(i=0;i<2;i++){
    int sum =0;
        for(j = 0; j < 2; j++) {
            sum = sum + matrix_A[i][j]; // add element to sum
            printf("%d\n",sum);
        }
         row_sum[i] =sum;
   }
    printf("\nSum of first row: %d", row_sum[0]);
    printf("\nSum of second row: %d", row_sum[1]);

    return 0;
}