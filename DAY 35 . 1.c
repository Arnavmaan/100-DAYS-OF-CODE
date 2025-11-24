//Rotate an array to the right by k positions.
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int arr[n] ;
    printf("\nenter the %d elements in the array",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    printf("\narray is :");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    int k,random[n];
    printf("enter the value of k: "); // k will rotate the array by k position
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        random[(i+k)%n] = arr[i];
    }
    printf("\nthe new array is: ");
    for(int i=0;i<n;i++){
        printf("%d\t",random[i]);
    }
    return 0;
}