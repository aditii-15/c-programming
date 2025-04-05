#include <stdio.h>

struct student{
    int rollno;
    char name[20];
    float marks;
};

int main(){
    struct student s1 = {1, "Aditi", 90};
    struct student s2 = {3, "Shreya", 85};

    printf("Info for s1 \n");
    printf("%d %s %f \n", s1.rollno, s1.name, s1.marks);
    printf("Info for s2 \n");
    printf("%d %s %f \n", s2.rollno, s2.name, s2.marks);
    
    
    
    
    
    return 0;
}