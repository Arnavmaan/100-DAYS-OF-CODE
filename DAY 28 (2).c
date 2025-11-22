// Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main(){
    int n,i,isprime=1; // isprime is a checking factor
    printf("enter the valur of n :");
    scanf("%d",&n);
    printf("prime number from 1 to %d are :\n",n); // print all the prime number from 1 to n
    
    for(int i =2; i<=n;i++){ //loop from 2 to n
        isprime =1;
    
        for(int j=2;j<=i/2;j++){ // loop from 2 to i/2
        if(i%j==0){
            isprime =0;
            break;
        }
    }
        if(isprime==1){
        printf("%d\n",i);
        }
    }     
    return 0;
}