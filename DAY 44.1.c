// Replace spaces with hyphens in a string.
#include<stdio.h>
int main(){
    char str[100];
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            str[i] = '-' ;
        }
    }
        printf("replaced string: %s",str);
    
 return 0;
}