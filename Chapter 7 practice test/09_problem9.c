#include <stdio.h>

int main(){
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 3; j++)
       {
       for (int k = 0; k < 4; k++)
       {
        printf("%u ", arr[i][j][k]); // has put a space between the 2 hypens so the result we got has space
       }
       
       }
       
    }
    
    return 0;
}