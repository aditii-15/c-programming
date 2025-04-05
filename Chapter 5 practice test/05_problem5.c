#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // the answer is 6 6 4 because when evaluation order is not defined then complier determines it's own
    return 0;
}