#include <stdio.h>

int main(){
    int n = 10;
    for (int i = 10; i; i--) // question is for decrementing for loop
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
    return 0;
}