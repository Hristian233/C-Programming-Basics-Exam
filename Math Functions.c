#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Math.h>

float addition (float num1, float num2){
    return num1+num2;
}

float substraction (float num1, float num2){
    return num1 - num2;
}

float multiplication (float num1, float num2){
    return num1 * num2;
}

float division (float num1, float num2){
    return  num1 / num2;
}

float powerOf (float num1, float num2){
    float result = 1;
    for (int i = 0; i < num2; i++){
        result  *= num1;
    }
    return result;
}

float sqRoot(float num1){
    return sqrt(num1);
}


int main(){

    char func;
    float number1,number2;
    float answer = 0;

    scanf("%c",&func);

    if (func == 'R'){
        scanf("%f",&number1);
    }
    else{
        scanf("%f %f",&number1,&number2);
    }



    switch (func){
        case '+':
            answer = addition(number1,number2);
            break;
        case '-':
            answer = substraction(number1,number2);
            break;
        case '*':
            answer = multiplication(number1,number2);
            break;
        case '/':
            answer = division(number1,number2);
            break;
        case '^':
            answer = powerOf(number1,number2);
            break;
        case 'R':
            answer = sqRoot(number1);
    }

    printf("%0.2f",answer);


    return 0;
}