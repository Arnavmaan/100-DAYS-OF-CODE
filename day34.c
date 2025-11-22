#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d elements in an array: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    printf("array is :");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    int pos,value;
    printf("\nenter the value u want to insert: \n ");
    scanf("%d",&value);
    printf("enter the position u want to enter the value ");
    scanf("%d",&pos);
    for(int i=n;i>=pos;i--){ // shifting the value to right 
        arr[i] = arr[i-1];
    }
    arr[pos-1] = value;
    n++;
    printf("final array: ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}