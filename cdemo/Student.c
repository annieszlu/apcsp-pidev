#include <stdio.h>
#include <string.h>


struct Student{
	char first[50];
	char last[50];
	int  age;
	int id;
};

void printStudent(struct Student * student)
{
	printf("The student is  -\n");
	printf(" First name: %s\n",student->first);
	printf(" Last name: %s\n" ,student->last);
	printf(" Age: %d\n", student->age);
	printf(" Student ID: %d\n", student->id);
}


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

	char str[256];

while (repeat == 0)
{
	printf("Enter the first name of student %d: ", num);
	fgets(input, 256, stdin);
	sscanf(input, "%s",  studArr[num].first);

	printf("\nEnter the last name of student %d: ", num);
	fgets(input, 256, stdin);
	sscanf(input, "%s", studArr[num].last);

	printf("\nEnter the age of student %d: ", num);
	while (1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%d", studArr[num].age) == 1) break;
		printf("\nNot a valid number. Try again!\n");
	}

	printf("\nEnter the id number of student %d: ", num);
	while (1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%d", studArr[num].id) == 1) break;
		printf("\nNot a valid number. Try again!\n");
	}

	printf("\nDo you want to enter another student? yes/no: ");
	fgets(input, 256, stdin);
	sscanf(input, "%s", str);
	if (strcmp(str, "no")
	{
		repeat = 1;
	}
	
	num++;

}

	for (int i = 0; i < num; i++)
	{
		printStudent(studArr);
	}

}

