// Prefix Code
#include <stdio.h>
#include<string.h>
//Write solution code below


void findToppers() {
    FILE *fp = fopen("score.csv", "r");
    if (fp == NULL) {
        return; // file not found or can't open
    }

    char name[51];
    int marks;
    int maxMarks = -1;

    // First pass: find the maximum marks
    while (fscanf(fp, "%50[^,],%d\n", name, &marks) == 2) {
        if (marks > maxMarks) {
            maxMarks = marks;
        }
    }

    // Reset file pointer to start
    rewind(fp);

    // Second pass: print students with max marks
    while (fscanf(fp, "%50[^,],%d\n", name, &marks) == 2) {
        if (marks == maxMarks) {
            printf("%s\n", name);
        }
    }

    fclose(fp);
}
