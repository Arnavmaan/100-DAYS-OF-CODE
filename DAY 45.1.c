//Toggle case of each character in a string.
#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    char ch;
    int freq =0;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(isupper(str[i])){
            str[i] = str[i] + 32; 
        }
        else if(islower(str[i])){
            str[i] = str[i] - 32;
        }
    }
    printf("resultant string is %s",str);
    return 0;
}