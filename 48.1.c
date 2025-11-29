//Reverse each word in a sentence without changing the word order
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char rev_str[100];
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] ='\0';
    int len = strlen(str);
    for(int i=0;i<len;i++){
       rev_str[i] = str[(i+1)%len];
    }
    printf("reversed string is: %s",rev_str);
    return 0;
}