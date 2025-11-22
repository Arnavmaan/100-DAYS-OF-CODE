// reverse an array without taking extra space.
#include<stdio.h>
int reverse(int arr[],int n); //this function will reverse the array
void printarr(int arr[],int n); // this function will print the reversed array

//function call
int main(){
    int arr[]= {1,3,5,6};
    reverse(arr,4);
    printarr(arr,4);
    return 0;
}
//function definition
int reverse(int arr[],int n ){
    int i =0 ;
    for(i=0;i<n/2;i++){
        int firstvalue = arr[i];
        int secoundvalue = arr[n-i-1]; // reversing the value
        arr[i] = secoundvalue;
        arr[n-i-1] = firstvalue;
    }
    return arr[i];
}
void printarr(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("reverse array is : %d\t",arr[i]);
    }
    return ;
}