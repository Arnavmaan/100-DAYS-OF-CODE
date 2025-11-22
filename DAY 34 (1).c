//Delete an element from an array.
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
    printf("\nenter the value u want to remove: \n ");
    scanf("%d",&value);
    
    printf("enter the position of element: ");
    scanf("%d",&pos);
    
    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // reduce size

    printf("final array is: ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}