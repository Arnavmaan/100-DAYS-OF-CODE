// Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
int main() {
    int arr[100], n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("resultant array is:  ");
    for (i = 0; i < n; i++) {
        printf(" %d\t",arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);
    int current_max_num = arr[0];
    for(int i=0;i<k;i++){
        if(arr[i]>arr[0]){
            current_max_num = arr[i];
        }
    }
    int max_num = current_max_num;
    for(int i=k;i<n;i++){
        if(arr[i]>arr[i-1]){
            current_max_num = arr[i];
        }
        max_num = current_max_num;
    }
    printf("max_num of sub array of size %d is %d\n",k,max_num);
    return 0;
}