#include <stdio.h>
#include <stdlib.h>
//Write solution code below
void writeToFile() {
    char s[51];
    fgets(s, 51, stdin);
    FILE *fp = fopen("notes.txt", "w");
    fputs(s, fp);
    fclose(fp);
}

int main() 
{
    char s[20];
    writeToFile();
    FILE *fp = fopen("notes.txt", "r");
    fgets(s, 20, fp);
    printf("%s", s);
    fclose(fp);
    return 0;
}