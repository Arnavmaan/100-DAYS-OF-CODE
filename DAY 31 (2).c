// Search for an element in an array using linear search.
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    int element ,found=0; // variable which will mark 1 if element is found
    printf("enter the element you want to search for : ");
    scanf("%d",&element);
    int i=0;
    for(i=0;i<5;i++){
        if(element==arr[i]){
            found =1;
            break; // it will end the loop
        }
    }
    if(found==1){
        printf("yes,element is present in the array");
    }
    else{
            printf("no,element is not present in the array");
        }
    
    return 0;
}