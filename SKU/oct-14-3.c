#include <stdio.h>
#define SIZE 3

struct student
{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	/*struct student s[SIZE];
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("Enter student %d number: ", i + 1);
		scanf("%d", &s[i].number);
		printf("Enter student %d name: ", i + 1);
		scanf("%s", s[i].name);
		printf("Enter student %d grade: ", i + 1);
		scanf("%lf", &s[i].grade);
	}
	for (i = 0;i < SIZE;i++)
	{
		printf("Student %d: %d, %s, %.1f\n", i + 1, s[i].number, s[i].name, s[i].grade);
	}*/
	// Pointer/-------------------
	//int A = 1004;
	//int* pA = NULL;
	//pA = &A;

	//printf("%d\n", A);
	//printf("%d\n", *pA);

	////printf("add of A: %0x\n", &A);
	//printf("add of pA: %p\n", &pA);

	struct student s = { 1001, "Wai Yan Naung", 4.5 };
	struct student* pS = NULL;
	pS = &s;
	printf("Student: %d, %s, %.1f\n", s.number, s.name, s.grade);
	printf("Student: %d, %s, %.1f\n", (*pS).number, (*pS).name, (*pS).grade);

	return 0;
}