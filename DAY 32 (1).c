// Find the digit that occurs the most times in an integer number.

#include<stdio.h>
int main(){
    int num,digit;
    int freq[10] = {0};
    printf("enter the value of num: ");
    scanf("%d",&num);
    
    int count=0;
    while(num > 0) {
        digit = num % 10;     // extract last digit.
        freq[digit]++;        // increase its count.
        num = num / 10;  
    }
    int max = 0, result = 0;
    for(int i=0; i<10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    printf("Digit that occurs most: %d\n", result);
    printf("Frequency: %d times\n", max);

    return 0;
}