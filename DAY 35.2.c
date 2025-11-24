// find the secound largest element in the array.
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the %d elements in the array",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    printf("array is :");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    int max_num =arr[0];
    int second_max = 0 ;
    for(int i=1;i<n;i++){
        if(arr[i]>max_num){
            second_max = max_num ;
            max_num=arr[i];
        }
        else if(arr[i] > second_max && arr[i] != max_num){
            second_max = arr[i];
    }
}
    printf("\nlargest element in the array is %d",max_num);
    printf("\nsecond largest element in the array is %d",second_max);
    return 0;
}
