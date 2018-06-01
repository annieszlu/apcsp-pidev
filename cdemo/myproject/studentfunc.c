#include <stdio.h>
#include <string.h>

struct Student{
        char first[50];
        char last[50];
        int  age[50];
        int id[50];
};

void printStudent(struct Student studArr[50], int num)
{
        for (int i = 1; i <= num; i++)
        {
                printf("\nStudent %d is:\n", i);
                printf(" First name: %s\n", studArr[i].first);
                printf(" Last name: %s\n" ,studArr[i].last);
                printf(" Age: %d\n", *studArr[i].age);
                printf(" Student ID: %d\n", *studArr[i].id);
        }
}

