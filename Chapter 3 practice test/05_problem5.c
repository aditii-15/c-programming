// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include <stdio.h>

int main(){
    char ch = 'A';
    printf("The character is %c\n", ch); 
    printf("The value of character is %d\n", ch);
    // 92-122 ascii value for lowercase
    if(ch>=97 && ch<=122){
        printf("This charcter is lowercase\n");
    }
    else{
        printf("This charceter is not lowercase\n"); 
    }
    return 0;
}