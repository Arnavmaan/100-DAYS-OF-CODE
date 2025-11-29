//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rotated[100];
    int n, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &n);

    len = strlen(str);
    n = n % len; // in case n > length

    // Perform rotation
    for (int i = 0; i < len; i++) {
        rotated[i] = str[(i + n) % len];
    }
    rotated[len] = '\0';

    printf("Left rotated string: %s\n", rotated);

    return 0;
}