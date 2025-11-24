//Find the sum of main diagonal elements for a square matrix.
#include<stdio.h>
   int main(){
    int matrix_A[2][2];
    int i,j;
    int sum = 0;  // sum of all diagonal elements
    
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
   for(i=0;i<2;i++){
        sum = sum +matrix_A[i][i];
   }
   printf("sum is %d\n",sum);
   return 0;
}