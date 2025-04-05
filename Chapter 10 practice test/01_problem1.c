#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("aditi.txt", "r");
    int num1, num2, num3;
    fscanf(fptr, "%d %d %d", &num1, &num2, &num3);
    printf("The values are %d %d %d \n", num1, num2, num3);
    fclose(fptr);
    return 0;
}