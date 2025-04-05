#include <stdio.h>


typedef struct vector{
    int i;
    int j;
} V;

V sumVector(struct vector v1, struct vector v2){
    struct vector v3 = {(v1.i + v2.i), (v1.j + v2.j)};
    return v3;
}

int main(){
    struct vector v1 = {1, 2};
    struct vector v2 = {5, 6};
    struct vector v3 = sumVector(v1, v2);
    printf("The value of vector v3 is %di + %dj", v3.i, v3.j);
    return 0;
}