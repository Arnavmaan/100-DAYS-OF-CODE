//Check if the elements on the diagonal of a matrix are distinct.
#include<stdio.h>
 int main(){
    int matrix_A[2][2];
    int i,j;
    int yes = 0;  // assume all diagonal elements are same
    
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
    int first = matrix_A[0][0];

    for(i=0;i<2;i++){
        if(matrix_A[i][i]!=first){
            yes = 1;
        }
    }
    if(yes==1){
        printf("diagonal elements are distinct");
    }else{
        printf("diagonal elements are same");
    }
return 0;
 
}