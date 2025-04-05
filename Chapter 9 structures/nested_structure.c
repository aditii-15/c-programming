// For c programming presentation
// writing of a structure inside another structure is called nested structure

#include <stdio.h>

struct Address {
    char city[20];
    int pin;
};

struct student {
    char name[20];
    int age;
    struct Address addr; // nested structure
};

int main(){
    struct student s1 = {"Aditi", 20, {"New York", 10001}};

    printf("Name: %s \n", s1.name);
    printf("Age: %d \n", s1.age);
    printf("City: %s \n", s1.addr.city);
    printf("PIN: %d \n", s1.addr.pin);
    
    
    return 0;
}