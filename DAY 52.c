// Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>
int main()
{
    int sort[100];
    int n; // number of elements in the array
    int x, index =-1 ;
    printf("enter the number of elements in array: ");
    scanf("%d", &n);
    printf("enter the elememts of the sorted array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sort[i]);
    }
    printf("sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", sort[i]);
    }
    printf("enter the value of x: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if(sort[i]>=x){
        index = i;
        break;
        }
    }
    if (index == -1)
    {
        printf("\nCeil does not exist: -1\n");
    }
    else
    {
        printf("\nCeil of %d is %d\n", x, sort[index]);
        printf("Index is %d\n", index);
    }

    return 0;
}