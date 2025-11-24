//Read and print a matrix.
 #include<stdio.h>
 int main(){
    int matrix_A[2][2];
    int matrix_B[2][2];
    int i,j;
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
printf("\nmatrix_B is:\n");
for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d ",matrix_B[i][j]);
    }
    printf("\n");
}
return 0;
}