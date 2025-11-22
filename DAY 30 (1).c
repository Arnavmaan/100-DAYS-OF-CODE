// count negative, positive and zero number in the array.
#include<stdio.h>

void countneg_pos_zero(int arr[],int n);
int main(){
    int arr[] = {1,2,6,0,-4,-6,0};
    countneg_pos_zero(arr,7);
    
    return 0;
}
void countneg_pos_zero(int arr[],int n){
    int pos_count=0,neg_count=0,zero_count=0;
    printf("all positive numbers in the array are:\n ");
    for(int i =0;i<n;i++){
        if(arr[i]>0){
            pos_count++;
            printf("%d\t",arr[i]);
        }
    }
    printf("\nall negative numbers in the array are:\n ");
    for(int i =0;i<n;i++){
        if(arr[i]<0){
            neg_count++;
            printf("%d\t",arr[i]);
        }
    }
    printf("\nall zero's in the array are:\n ");
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            zero_count++;
            printf("%d\t",arr[i]);
        }
    }
    printf("\ntotal positive number in the array are : %d\n",pos_count);
    printf("\ntotal negative number in the array are : %d\n",neg_count);
    printf("\ntotal zero's  in the array are : %d\n",zero_count);
    return;
}


