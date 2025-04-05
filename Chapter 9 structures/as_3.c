#include <stdio.h>
#include <string.h>

struct employee{
    char name [10];
    int age;
    float salary;
};

int main(){
    struct employee e1 = {"Shreya", 23, 6600.5};
    struct employee e2,e3;

    strcpy(e2.name, e1.name); // yeh jab bhi ho toh string bhi daalna hota hai
    e2.age = e1.age;
    e2.salary = e1.salary;
    e3=e2;

    printf("%s %d %f \n", e1.name, e1.age, e1.salary);
    printf("%s %d %f \n", e2.name, e2.age, e2.salary);
    printf("%s %d %f \n", e3.name, e3.age, e3.salary);
    
    return 0;
}