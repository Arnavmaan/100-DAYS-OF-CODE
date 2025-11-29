//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main() {
    int nums[100], answer[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int prefix[100], suffix[100];

    // Build prefix products
    prefix[0] = 1;
    for (i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Build suffix products
    suffix[n - 1] = 1;
    for (i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Multiply prefix and suffix to get final answer
    for (i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    printf("\nOutput array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}