#include <stdio.h>

int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5 
    // 0! = 1
    // done the question with while loop
    int i = 1;
    int product = 1;
    int n = 4;
    while(i<=n);
    {
       product *= i;
       i++;
    }
    printf("The factorial of %d is %d", n, product);
    return 0;
}