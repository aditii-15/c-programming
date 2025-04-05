#include <stdio.h>

int main(){
    int age = 45;

    if(age>60){
        printf("You can drive and you are a senior citizen");
    }
    else if(age>18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }
    // only 1 code will run in this even if 2 statements are true whichever statement comes first it will run
    // if all the given statement are false then only else statement will run
    return 0;
}