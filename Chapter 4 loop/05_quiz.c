#include <stdio.h>

int main(){
    /*
    Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop
counter is initialized to 0.
*/

    float i = 0;
    while(i<=20){
        if(i>=10){
            printf("The value of i is %.2f\n", i);
        }
        i++;
    }
    return 0;
}