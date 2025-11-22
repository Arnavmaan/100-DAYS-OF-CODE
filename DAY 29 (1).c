//Find the maximum and minimum element in an array.

#include<stdio.h>
int main(){
    int arr[100];
    int n,max,min,i=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    // input the values in array.
    printf("enter the %d elements in the array\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // output.
    printf("elements of the array are :\n");
    for( i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    // Initialize max and min with the first element
    max = min = arr[0];

    // Find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    // Display results
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}