#include <stdio.h>

int main(){
    int age = 15;

    if(age>5){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    else{
        printf("Your age is not greater than 10");
    }
    // else will only print if only "if" statement is false
    // if the "if" statement is true then else statement will not print
    return 0;
}