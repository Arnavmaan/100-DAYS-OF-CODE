//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n(n>0): ");
    scanf("%d",&n);
    int total_sum =0,right_sum=0,left_sum=0;
    for(int i=0;i<=n;i++){
        total_sum += i;
    }
    for(int i=0;i<=n;i++){
        right_sum = total_sum - left_sum - i;
        if(right_sum==left_sum){
            printf("value of x(pivot integer) is: %d",i);
            return 0;
        }
        left_sum += i;
    }
    printf("-1");
    return 0;
}