//Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

// N.B:
// - Print the output for each element in a comma separated fashion.
// - Do not use Stack, use brute force approach (nested loop) to solve.
#include <stdio.h>

int main() {
    int arr[100], n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");

    // Brute force nested loop
    for (i = 0; i < n; i++) {
        int previous = -1;

        // search for the next greater element on the right
        for (j = i - 1; j > 0; j--) {
            if (arr[j] > arr[i]) {
                previous = arr[j];
                break; // we want the **nearest** greater element
            }
        }

        // Print with comma (but avoid trailing comma)
        
            printf("\nprevious greater element for %d is %d\n",arr[i],previous);
        
    }

    return 0;
}