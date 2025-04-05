#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i (it stores the address of i), j is integer pointer
     int k = 67;
    printf("The address of i is %p\n", &i); 
    printf("The address of i is %p\n", j); 
    printf("The address of i is %p\n", &k); 
    // %p is pointer and if we write %u then it will show in integer

    printf("The value at address at j is %d\n", *j);
    // the address value can also written as *j and *(&i)

    return 0;
}