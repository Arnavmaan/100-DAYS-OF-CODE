//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include<stdio.h>
int main(){
    int arr[100];
    int n,majority=-1;
    int i,j;
    
    printf("number of elements in the array");
    scanf("%d",&n);
    printf("\nenter the elements in array: ");
    for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    printf("\nfinal array is: ");
    for(int i=0;i<n;i++){
     printf(" %d\t",arr[i]);
    }
    int freq[100]={0};
    for( i = 0; i < n; i++) {
        if(freq[i] == 1)  
            continue;     // already counted → skip

        int count = 1;
        for( j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 1; // mark as counted
            }
            if(count > n/2) {    // majority condition
            majority = arr[i];
            break;
        }
      }
    }
      if(majority == -1)
        printf("-1\n");
    else
        printf("Majority element is: %d\n", majority);

      return 0; 
    }