#include <stdio.h>

int main(){
    int cgpa[] = {9, 8, 8}; // we can wirte cgpa[] or in cgpa[3] both forms
    for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n",i, cgpa[i]);
    }
    
    return 0;
}