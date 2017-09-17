#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define COUNT 100


typedef struct {
    char name[30];
    int testPoints;
    int homeworkPoints;
    int practitalsSum;
    int studentGrade;
}Student;

Student returnStudentGrade(Student StudentToEvaluate){
    int result = 0;
    result += StudentToEvaluate.testPoints;
    result += StudentToEvaluate.homeworkPoints;
    result += StudentToEvaluate.practitalsSum;
    StudentToEvaluate.studentGrade = result;
    return StudentToEvaluate;
}

int main()
{

    Student students[COUNT];


    for (int i = 0; i < COUNT; i++){
         scanf("%s %d %d %d",students[i].name,&students[i].testPoints,&students[i].homeworkPoints,&students[i].practitalsSum);
         students[i] = returnStudentGrade(students[i]);
    }

    for (int i = 0; i < COUNT; i++){
        if (students[i].studentGrade >= 75){
            printf("%s \n",students[i].name);
        }
    }



    return 0;
}