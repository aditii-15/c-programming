#include <stdio.h>

int main()
{
    
    int n = 3;
    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }

    int i = 2;
    // FOR WHILE LOOP QUESTION
    // while(i < n){
    //     if (n % i == 0 && n != 2)
    //     {
    //         not_prime = 1;
    //         break;
    //     }
    //     i++;
    // }

    // FOR DO WHILE LOOP QUESTION
    do {
        if (n % i == 0 && n != 2)
        {
            not_prime = 1;
            break;
        }
        i++;
    }while(i < n);

    if (not_prime){
        printf("%d is not prime\n", n);
    }

    else{
        printf("%d is prime\n", n);
    }

    return 0;
}