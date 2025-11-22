// Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *
#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){     // for upper half upto line 6.
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){     //for lower half from line 7 to 10.
        for(j=1;j<=2*i-1;j++){

        
        printf("*");
        }
        printf("\n");
    }
    return 0;
}