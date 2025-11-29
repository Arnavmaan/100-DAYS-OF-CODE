//Print each character of a string on a new line.
#include<stdio.h>
int main(){
    char arr[100];
    printf("enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    int ch ;
    for(int i=0;arr[i]!='\0';i++){
        ch = arr[i];
    printf("%c\n",arr[i]);
    }
    return 0;
}