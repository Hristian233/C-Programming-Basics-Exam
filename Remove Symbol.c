#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


char *removeMe(char *point, int ch)
{
    char *myPointer;

    while (myPointer = strchr(point, ch))
        strcpy(myPointer, myPointer + 1);

    return point;
}

int main()
{

    int stringSize;
    scanf("%d",&stringSize);
    char *myString = (char*)malloc(stringSize);
    scanf("%s",myString);

    int ch;
    ch = '@';

    myString = removeMe(myString,(char)ch);
    myString = strrev(myString);

    for (int i = 0; i < strlen(myString); i++){
        myString[i] = tolower(myString[i]);
    }

    printf("%s",myString);




    return 0;
}