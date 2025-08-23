#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Write solution code below
int countString() {
    char input[100];
    char word[100];
    int count = 0;

    // Read search string
    scanf("%s", input);

    // Open file
    FILE *file = fopen("notes.txt", "r");
    if (file == NULL) {
        return 0;
    }

    // Read each word and check if input is a substring
    while (fscanf(file, "%s", word) != EOF) {
        if (strstr(word, input) != NULL) {
            count++;
        }
    }

    fclose(file);
    return count;
}