// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
int main()
{
    int arr[100], n, k, i,j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("resultant array is:  ");
    for (i = 0; i < n; i++){   
            printf("%d\t", arr[i]);
        }
        printf("Enter value of k: ");
        scanf("%d", &k);
        
    printf("\nFirst negative number in each subarray of size %d:\n", k);

    for (int i = 0; i <= n - k; i++) {
        int found = 0;

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d\n", arr[j]);  // First negative
                found = 1;
                break;
            }
        }

        if (!found)
            printf("0\n");  // If no negative number exists
    }

        return 0;
    }     