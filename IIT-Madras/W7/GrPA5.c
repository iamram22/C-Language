#include <stdio.h>
#include <string.h>
void print_words(char str[],char delim[])
{
  //Write function definition

    str[strcspn(str, "\n")] = 0;
    delim[strcspn(delim, "\n")] = 0;
    
    // Use strtok to split the string by delimiter
    char *token = strtok(str, delim);
    
    // Print each token on a separate line
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }

}

int main() 
{
    char str[1000];
    char delim[10];
    // Input a str
    fgets(str,1000,stdin);
    // Input a delimiter
    fgets(delim,10,stdin);

    print_words(str,delim);
    return 0;
}


// Split String by Delimiter and Print Parts

// Write a function print_words that takes a string and a delimiter as input, and prints the parts of the string that are split by the delimiter on separate lines.

// Hint: use the strtok function from the string.h library.

// Input:

// The input consists of two lines.

// The first line contains the string (str) to be split.
// The second line contains a single character, the delimiter (delim), which is used to split the string.
// Output:

// The function should print each part of the string that is split by the delimiter on separate lines.