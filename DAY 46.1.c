// Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // to count frequency of each letter

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {   // check if lowercase
            freq[ch - 'a']++;
            if (freq[ch - 'a'] > 1) {   // found repeating
                printf("First repeating lowercase letter: %c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase letter found.\n");
    return 0;
}