//#include <stdio.h>
//#define SIZE 3
//
//struct student
//{
//	int number;
//	char name[20];
//	double grade;
//};
//int equal(struct student *s1, struct student *s2);
//struct student create() {
//	struct student s;
//	s.number = 3;
//	strcpy(s.name, "park");
//	s.grade = 4.3;
//	return s;
//}
//int main(void)
//{
//	/*struct student s[SIZE];
//	int i;
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("Enter student %d number: ", i + 1);
//		scanf("%d", &s[i].number);
//		printf("Enter student %d name: ", i + 1);
//		scanf("%s", s[i].name);
//		printf("Enter student %d grade: ", i + 1);
//		scanf("%lf", &s[i].grade);
//	}
//	for (i = 0;i < SIZE;i++)
//	{
//		printf("Student %d: %d, %s, %.1f\n", i + 1, s[i].number, s[i].name, s[i].grade);
//	}*/
//	// Pointer/-------------------
//	//int A = 1004;
//	//int* pA = NULL;
//	//pA = &A;
//
//	//printf("%d\n", A);
//	//printf("%d\n", *pA);
//
//	////printf("add of A: %0x\n", &A);
//	//printf("add of pA: %p\n", &pA);
//
//	/*struct student s = { 1001, "Wai Yan Naung", 4.5 };
//	struct student* pS = NULL;
//	pS = &s;
//	printf("Student: %d, %s, %.1f\n", s.number, s.name, s.grade);
//	printf("Student: %d, %s, %.1f\n", (*pS).number, (*pS).name, (*pS).grade);
//	printf("Student: %d, %s, %.1f\n", pS->number, pS->name, pS->grade);*/
//
//	// Array of Structure with Pointer/-------------------
//	/*struct student s1 = { 1001, "Wai Yan Naung", 4.5 };
//	struct student s2 = { 1001, "Aung Aung", 4.0 };
//
//	if (equal(&s1, &s2) == 1)
//		printf("Same Number\n");
//	else if (equal(&s1, &s2) == 2)
//		printf("Same Name\n");
//	else if (equal(&s1, &s2) == 3)
//		printf("Same Grade\n");
//	else
//		printf("Not Equal\n");
//
//	return 0;*/
//
//	struct student a = { 20190001,"hong", 3.8 };
//	struct student b;
//	b = create();
//	printf("%d %s %.1lf\n", b.number,
//	b.name, b.grade);
//	return 0;
//
//}
//
//int equal(struct student* s1, struct student* s2)
//{
//	if (s1->number == s2->number)
//		return 1;
//	else if (s1->name == s2->name)
//		return 2;
//	else if (s1->grade == s2->grade)
//		return 3;
//	else
//		return 0;
//}