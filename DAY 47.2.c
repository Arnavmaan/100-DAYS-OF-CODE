//Check if two strings are anagrams of each other.
#include<stdio.h>
int main(){
    char str[100];
    char str_[100];
    printf("enter the string_1: ");
    fgets(str,sizeof(str),stdin);
    printf("enter the string_2: ");
    fgets(str_,sizeof(str_),stdin);
    int ch;
    for(int i=0;str[i]!='\0';i++){
         ch=str[i];
    }
    int charm;
    for(int j=0;str_[j]!='\0';j++){
        charm = str_[j];
    }
    if(charm == ch){
        printf("%s and %s are anagrams",str,str_);
    }
    else{
        printf("%s and %s are not anagrams",str,str_);
    }
    return 0;
}