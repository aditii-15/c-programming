#include <stdio.h>

float average (int a, int b, int c);


float average (int a, int b, int c){ 
    return (a+b+c)/3.0;
}

int main(){
    int a = 5, b = 5, c = 7;
    printf("The average of a, b and c is %.2f", average(a, b, c));
    return 0;
}