// Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // read string including spaces

    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';  // remove newline character if present
        len--;
    }

    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[i] = '\0';  // null terminate the reversed string

    printf("Reversed string: %s\n", rev);
    
    if(strcmp(str,rev)==0){
        printf("yes,string is a palindrome");
    }
    else{
        printf("no,string is not a palindrome");
    }
    return 0;
}