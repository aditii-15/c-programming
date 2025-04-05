#include <stdio.h>

int main(){
    int i= 5;
     printf("The value of i is %d\n", i);

    i = i + 5; // 10
    printf("The value of i is %d\n", i);
    // i++; // 11
     printf("The value of i is %d\n", i++); // 10
     printf("The value of i is %d\n", i); // 11

     i +=2; // same as i = i + 2
     printf("The value of i is %d\n", i); //13

    //  i++ prints first i and then increments (i is increased by 1)
    // ++i increments first and then prints i
    return 0;
}