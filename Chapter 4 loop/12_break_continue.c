#include <stdio.h>

int main(){
    for (int i = 0; i < 15; i++) // it will print until 14 
    {
        if(i==5){ // now the code will run from this condition
            // break; // exit the loop now 
            // output for break loop will be 
            /* 1
              2
              3
              4*/      
            continue; // skip this iteration now which means the given code  will skip         
        }
       printf("i is %d\n", i);
    }
    printf("For loop is done!");
    return 0;
}