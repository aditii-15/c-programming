#include <stdio.h>

struct Student {
    char name[20];
    int age;
    float marks;
};

int main() {
    struct Student s1 = {"Aditi", 20, 89.5};
    struct Student *ptr = &s1;  // Pointer to structure

    // Accessing members using arrow (->) operator
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
