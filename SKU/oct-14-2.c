#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};
int main(void) {
	int count = 0;
	struct student s;
	while(1){
		printf("Enter student number: ");
		scanf("%d", &s.number);
		if (s.number <= 0)
			break;

		printf("Enter student name: ");
		scanf("%s", s.name);
		printf("Enter student grade: ");
		scanf("%lf", &s.grade);

		printf("Student: %d, %s, %.1f\n\n", s.number, s.name, s.grade);
		count++;
	}
	printf("Total number of students: %d\n", count);
	return 0;
}