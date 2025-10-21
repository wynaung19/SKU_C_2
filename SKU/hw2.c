#include <stdio.h>
#include <string.h>

#define STU_NUMBER 1
#define REG_NUMBER 2
struct student {
	int type;
	union {
		int stu_number;
		char reg_number[15];
	}id;
	char name[20];
	int grade;
};

char grade_letter(int grade) {
	if (grade >= 85) return 'A';
	else if (grade >= 70) return 'B';
	else if (grade >= 55) return 'C';
	else if (grade >= 40) return 'D';
	else return 'F';
}

void print(struct student s) {
	switch (s.type){
	case STU_NUMBER:
		printf("STUNUM : %d\n", s.id.stu_number);
		printf("NAME : %s\n", s.name);
		break;
	case REG_NUMBER:
		printf("REGNUM : %s\n", s.id.reg_number);
		printf("NAME : %s\n", s.name);
		break;
	default:
		break;
	}
}

int main() {
	struct student s1, s2,s3;
	/*s1.type = STU_NUMBER;
	s1.id.stu_number = 1001;
	strcpy(s1.name, "Wai Yan Naung");
	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number, "REG2024001");
	strcpy(s2.name, "Aung Aung");
	print(s1);
	print(s2);*/
	printf("Enter type, id and name grade for stu1: ");
	scanf("%d %d %s %d", &s1.type, &s1.id.stu_number, s1.name, &s1.grade);
	printf("Enter type, id and name grade for stu2: ");
	scanf("%d %s %s %d", &s2.type, s2.id.reg_number, s2.name, &s2.grade);
	printf("Enter type, id and name grade for stu3: ");
	scanf("%d %s %s %d", &s3.type, s3.id.reg_number, s3.name, &s3.grade);

	printf("TYPE\tID\tNAME\tSCORE\tGRADE\n");
	printf("%d\t%d\t%s\t%d\t%c\n", s1.type, s1.id.stu_number, s1.name, s1.grade, grade_letter(s1.grade));
	printf("%d\t%s\t%s\t%d\t%c\n", s2.type, s2.id.reg_number, s2.name, s2.grade, grade_letter(s2.grade));
	printf("%d\t%s\t%s\t%d\t%c\n", s3.type, s3.id.reg_number, s3.name, s3.grade, grade_letter(s3.grade));

	
	return 0;
}

