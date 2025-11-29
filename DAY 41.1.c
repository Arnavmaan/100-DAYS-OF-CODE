//Count characters in a string without using built-in length functions.
#include<stdio.h>
int main(){
    char arr[100];
    printf("enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    int count = 0;
    int ch ;
    for(int i=0;arr[i]!='\0';i++){
        ch = arr[i];
    if(ch>='a'&&ch<='z'){
       count++;
    }
}
    printf("number of characters in string is %d",count);
    return 0;
}