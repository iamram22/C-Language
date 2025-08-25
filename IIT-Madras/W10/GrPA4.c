#include <stdio.h>
// template
int count_words(FILE *fp) {
    if (fp == NULL) return 0;

    int count = 0;
    char word[256];

    // Read words until EOF
    while (fscanf(fp, "%255s", word) == 1) {
        count++;
    }
    fclose(fp);
    return count;
}