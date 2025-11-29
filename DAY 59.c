//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int arr[100], n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    // Edge case: if k > n
    if (k > n) {
        printf("Invalid! k cannot be greater than array size.\n");
        return 0;
    }

    int current_sum = 0;

    // Step 1: Calculate sum of first window (first k elements)
    for (i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    int max_sum = current_sum;

    // Step 2: Slide the window
    for (i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("Maximum subarray sum of size %d is: %d\n", k, max_sum);

    return 0;
}
