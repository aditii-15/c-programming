#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("aditi.txt", "a"); // append mode
    // write mode clears the file and then it write down ("w")
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}