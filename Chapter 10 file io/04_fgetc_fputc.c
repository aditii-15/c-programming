#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("aditi.txt", "a");
    // char c = fgetc(ptr);      // used to read a character from file
    // printf("%c", c);
    fputc('c', ptr); // used to write character 'c' to the file
    return 0;
}