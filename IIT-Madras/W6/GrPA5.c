// Byte Swap for an Unsigned Int

// Complete the given C program that reads an unsigned integer in hexadecimal format, swaps the first two bytes and last two bytes of the integer, and then prints the result in hexadecimal format.

// Note: you only have to write the code to swap the bytes.

#include <stdio.h>

int main() 
{
    unsigned int a; 
    scanf("%08X", &a);
    //Write code below
// Extract the first two bytes (upper 16 bits) and last two bytes (lower 16 bits)
unsigned int first_two_bytes = (a >> 16) & 0xFFFF;
unsigned int last_two_bytes = a & 0xFFFF;

// Swap them: put last two bytes in upper position, first two bytes in lower position
a = (last_two_bytes << 16) | first_two_bytes;
    printf("%08X",a);
    return 0;
}