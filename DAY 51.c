// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>
int main()
{
    int nums[30];
    int targets;
    int n = 5; // number of targets
    printf("enter the targets: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("entered array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", nums[i]);
    }
    printf("\nEnter the targets you want to find: ");
    scanf("%d", &targets);

    int first = -1, last = -1;

    // Find first occurrence
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == targets)
        {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] == targets)
        {
            last = i;
            break;
        }
    }

    printf("First occurrence: %d\n", first);
    printf("Last  occurrence: %d\n", last);

    return 0;
}