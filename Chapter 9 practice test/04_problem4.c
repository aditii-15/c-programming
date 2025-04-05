#include <stdio.h>


typedef struct employee{
    int salary;
    float score;
} Emp;

int main(){
    Emp e1;
    Emp* ptr = &e1;
    ptr->salary = 56;
    ptr->score = 45.3;

    printf("The value of salary is %d\n and the value of score is %f\n", ptr->salary, ptr->score);
    
    return 0;
}