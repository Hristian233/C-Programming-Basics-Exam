#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void printInBase(int base,int number,char Sepchar){
    char tempBinaryNumber[33] = {0};
    int i =0;

    while(number != 0){
        char residue = number % base;
        number /= base;
        if (residue < 10){
            tempBinaryNumber[i] = '0' + residue;

        }
        else if (residue >= 10){
            tempBinaryNumber[i] = 'A' + (residue-10);
        }
        i++;
    }

    char binaryNumber[33] ={0};

    for (int j = 0; j < i;j++){
        binaryNumber[j] = tempBinaryNumber[i-(j+1)];


    }

    printf("%s\n",binaryNumber);
}
int main()
{


    int n;
    char input1[100];
    scanf("%s",&input1);
    char CCN[] = "0x";
    strcat(CCN,input1);


    sscanf(CCN, "%x", &n);

    printInBase(5,n,'o');

    return 0;
}