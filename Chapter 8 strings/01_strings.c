#include <stdio.h>

int main(){
    // char st[]= {'a', 'b', 'c', '\0'}; //(\0) this is a null character use to tell the string has ended
    char st[] = "abc"; // Same as above
    for (int i = 0; i < 3; i++)
    {
    printf("Character is %c \n", st[i]);
    }
    
    
    return 0;
}