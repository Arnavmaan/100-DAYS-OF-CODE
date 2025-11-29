//Count spaces, digits, and special characters in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    int count_space=0, count_digit=0, count_spl_characters = 0;
     
    
    for(int i=0;str[i]!= '\0';i++){
        if( str[i]== ' '){
            count_space++ ;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            count_digit++;
        } 
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            // Do nothing for alphabets
        } 
        else if (str[i] != '\n') {
            count_spl_characters++;
        }
    }
        printf("number of spaces are: %d\n ",count_space);
        printf("number of digits are: %d\n ",count_digit);
        printf("number of special characters are: %d\n",count_spl_characters);
    return 0;    
}