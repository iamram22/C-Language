// List the bytes of the Integer in Big-Endian order (On a Little-Endian Machine)

// Write a C program that takes an unsigned integer input in hexadecimal format and prints each byte of the number in hexadecimal format on separate lines. The program should assume that the machine stores data in little-endian order, which means the least significant byte is stored first in memory, but it should print the bytes in big-endian order, where the most significant byte is printed first.

// Input Format

// Hexadecimal integer.
// Output:

// 4 lines with hex byte in each line in big-endian order, even though the machine uses little-endian order for storage.
// Sample Input:

// 1234ABCD
// Sample Output:

// 12
// 34
// AB
// CD

#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%x", &num);
    
    // Extract each byte and print in big-endian order
    unsigned char *bytes = (unsigned char*)&num;
    
    // Print bytes in reverse order (big-endian)
    for(int i = sizeof(unsigned int) - 1; i >= 0; i--) {
        printf("%02X\n", bytes[i]);
    }
    
    return 0;
}

//done