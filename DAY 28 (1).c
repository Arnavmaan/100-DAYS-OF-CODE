// Read and print elements of a one-dimensional array.

#include<stdio.h>
int main(){
    int arr[100];
    int n,i=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    // input the values in array
    printf("enter the %d elements in the array\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // output 
    printf("elements of the array are :\n");
    for( i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}