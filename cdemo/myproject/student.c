#include <stdio.h>
#include <string.h>
#include "studentfunc.h"


int main()
{
//	int num;
//	printf("Enter the number of students you want to enter: ");
//	
//	while (1)
//	{
//		fgets(input, 256, stdin);
//		if (sscanf(input, "%d", &num) == 1) break;
//		printf("Not a valid number. Try again!\n");
//	}
	struct Student studArr[100];
	int num = 1;
	int repeat = 0;
	char input[256];

while (repeat == 0)
{
	printf("Enter the first name of student %d: ", num);
	fgets(input, 256, stdin);
	sscanf(input, "%s",  studArr[num].first);

	printf("Enter the last name of student %d: ", num);
	fgets(input, 256, stdin);
	sscanf(input, "%s", studArr[num].last);

	printf("Enter the age of student %d: ", num);
	while (1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%d", studArr[num].age) == 1) break;
		printf("Not a valid number. Try again!\n");
	}

	printf("Enter the id number of student %d: ", num);
	while (1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%d", studArr[num].id) == 1) break;
		printf("Not a valid number. Try again!\n");
	}

	printf("Do you want to enter another student? yes/no: ");
	fgets(input, 256, stdin);
	sscanf(input, "%s", input);
	printf("\n");
	if (strcmp(input, "no") == 0)
	{
		repeat = 1;
		break;
	}
	else
	{
		num++;
	}	

}

	printStudent(studArr, num);

}

