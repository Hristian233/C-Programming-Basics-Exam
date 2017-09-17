#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100



int main(){

    int input[SIZE];

    for(int i = 0; i < SIZE; i++){
        scanf("%d",&input[i]);
    }

    for(int i = 0; i < SIZE; i++){
        if (input[i] >= 0 && input[i] <= 100){
            printf("%d ", input[i]);
        }
    }


    return 0;
}