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
	printf("Enter type, id and name: ");
	scanf("%d %d %s %", &s3.type, &s3.id.stu_number, s3.name);
	print(s3);
	return 0;
}