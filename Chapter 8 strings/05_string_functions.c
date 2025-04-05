#include <stdio.h>
#include <string.h>

int main(){
    char st[] = "Aditi";
    char s1[56] = "Aditi";
    char s2[56] = " bhen";

    // printf("%d", strlen(st));
// This function is used to tell how many characters are there in string excluding the null character
  
    char target[30];
    strcpy (target,st); //target now contains "Aditi"
    // printf("%s %s", st, target);

    strcat(s1,s2); // s1 now contains "Aditibhen" <no space in between>
    // printf("%s", s1);

    int a = strcmp("deep", "joke"); // DJ is negative
    printf("%d", a);


    return 0;
}
