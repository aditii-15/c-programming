#include <stdio.h>

int main(){
    int a =1; int b=1;
    printf("The value of a and b is %d\n", a&&b);
    // for and which is (&&) the statement is true if '1 and 1' is evaluted
    // the and statement is not false if '1 and 0' or '0 and 1' is evalutued

    printf("The value of a or b is %d\n", a||b);
    // for or which is (||) the statement will bw true is atleast one condition is true

    printf("the value of not(a) is %d\n", !a);
    // for not which is (!) it will reverse the value of the given statement
    return 0;
}