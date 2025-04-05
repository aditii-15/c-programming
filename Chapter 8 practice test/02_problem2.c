#include <stdio.h>

int main(){
    char str[7];
    // scanf("%s", str);
    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[6] = '\0';
    // for loop character by charcter chalane ke liye use kiya
    printf("%s", str);
    return 0;
}