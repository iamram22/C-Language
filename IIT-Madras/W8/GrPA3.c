#include <stdio.h>
#include <string.h>
//Write Solution code below
// Define the struct Book
struct Book {
    char title[100];
    char author[100];
    int publication_year;
};

// Function to find and print books published in the given year
void findBooksPublishedInYear(struct Book books[], int length, int year) {
    int found = 0;
    for (int i = 0; i < length; i++) {
        if (books[i].publication_year == year) {
            printf("%s: %s\n", books[i].title, books[i].author);
            found = 1;
        }
    }
    if (!found) {
        printf("NONE\n");
    }
}
int main() 
{
    int n;
    scanf("%d", &n);
    struct Book books[n];
    for (int i = 0; i < n; i++) 
    {       
        scanf("%s",books[i].title);
        scanf("%s",books[i].author);
        scanf("%d",&books[i].publication_year);
    }
    int searchYear;
    scanf("%d", &searchYear);
    findBooksPublishedInYear(books, n, searchYear);

    return 0;
}

// Create a struct named Book to store information about books, including the members: title, author, and publication_year to store the title of the book as a string (maximum size 100), name of the author as a string (maximum size 100) and publication year as integer respectively.

// Write a function findBooksPublishedInYear that accepts an array of Book structs, length of the array (integer), and year (integer) as parameters. The function prints the title and author of all books published in a given year in a format given in sample output . If no record is found, it prints NONE

// Note:- If more than one book is published in the given year, then print the titles: author in increasing order of their index in the array.