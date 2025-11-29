//Count frequency of a given character in a string.
#include<stdio.h>
int main(){
    char str[100];
    char ch;
    int freq =0;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    
    printf("Enter the character to find frequency: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            freq++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, freq);

    return 0;
}