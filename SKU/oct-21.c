//#include <stdio.h>
//#include <string.h>
//#define STU_NUMBER 1
//#define REG_NUMBER 2
//
////---------------3------------------//
//typedef int i;
//struct student {
//	i type;
//	union {
//		int stu_number;
//		char reg_number[15];
//	}id;
//	char name[20];
//};
//int main(void) {
//	struct student s1, s2;
//	s1.type = STU_NUMBER;
//	s1.id.stu_number = 1001;
//	strcpy(s1.name, "Wai Yan Naung");
//	s2.type = REG_NUMBER;
//	strcpy(s2.id.reg_number, "REG2024001");
//	strcpy(s2.name, "Aung Aung");
//	printf("Student 1: %d, %s\n", s1.id.stu_number, s1.name);
//	printf("Student 2: %s, %s\n", s2.id.reg_number, s2.name);
//	return 0;
//}
////---------------2------------------//
////enum days{
////	MON=1,TUE,WED,THU,FRI,SAT, SUN=7
////};
////
////char* day[] = { "","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
////
////int main(void) {
////	enum days d;
////	d = SUN;
////	printf("Day %d : %s\n", d,day[d]);
////	return 0;
////}
//// 
////---------------1------------------//
//// 
////struct student{
////	int type;
////	union {
////		int stu_number;
////		char reg_number[15];
////	}id;
////	char name[20];
////};
////void print(struct student s) {
////	switch (s.type){
////	case STU_NUMBER:
////		printf("STUNUM : %d\n", s.id.stu_number);
////		printf("NAME : %s\n", s.name);
////		break;
////	case REG_NUMBER:
////		printf("REGNUM : %s\n", s.id.reg_number);
////		printf("NAME : %s\n", s.name);
////		break;
////	default:
////		break;
////	}
////}
////
////int main() {
////	struct student s1, s2;
////	s1.type = STU_NUMBER;
////	s1.id.stu_number = 1001;
////	strcpy(s1.name, "Wai Yan Naung");
////	s2.type = REG_NUMBER;
////	strcpy(s2.id.reg_number, "REG2024001");
////	strcpy(s2.name, "Aung Aung");
////	print(s1);
////	print(s2);
////	return 0;
////}