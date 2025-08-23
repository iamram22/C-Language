#include <stdio.h>
// Write solution code below

void readFile() {
    FILE *fp = fopen("output.txt", "r");
    if (!fp) return; // In portal, usually no error print

    int n;
    while (fscanf(fp, "%d", &n) == 1) {
        printf("%d\n", n);
    }
    fclose(fp);
}
