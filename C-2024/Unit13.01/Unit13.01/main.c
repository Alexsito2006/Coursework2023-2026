#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For toupper()

int main(void) {
    char word[20];
    printf("Please enter a string of 20 or less letters\n(lowercase): ");
    fgets(word, sizeof(word), stdin);

    // Remove the newline character if present
    size_t length = strlen(word);
    if (length > 0 && word[length - 1] == '\n') {x
        word[length - 1] = '\0';
    }

    // Convert to uppercase
    for (int i = 0; word[i] != '\0'; i++) {
        word[i] = toupper(word[i]);
    }

    printf("In Uppercase: %s\n", word);
    return 0;
}
