//#include <stdio.h>
//#include <stdlib.h> 
//#include <string.h>
//
//#define STU_NUMBER 1
//#define REG_NUMBER 2
//
//struct student {
//    int type;
//    union {
//        int stu_number;
//        char reg_number[15];
//    } id;
//    char name[20];
//    int grade;
//};
//
//
//char grade_letter(int grade) {
//    if (grade >= 85) return 'A';
//    else if (grade >= 70) return 'B';
//    else if (grade >= 55) return 'C';
//    else if (grade >= 40) return 'D';
//    else return 'F';
//}
//
//
//void print(struct student s) {
//    if (s.type == STU_NUMBER) {
//        printf("%d\t%d\t%s\t%d\t%c\n",
//            s.type, s.id.stu_number, s.name, s.grade, grade_letter(s.grade));
//    }
//    else if (s.type == REG_NUMBER) {
//        printf("%d\t%s\t%s\t%d\t%c\n",
//            s.type, s.id.reg_number, s.name, s.grade, grade_letter(s.grade));
//    }
//}
//
//int main() {
//    int n;
//    printf("Enter number of students: ");
//    scanf("%d", &n);
//
//
//    struct student* s = (struct student*)malloc(n * sizeof(struct student));
//    if (s == NULL) {
//        printf("Memory allocation failed!\n");
//        return 1;
//    }
//
//
//    for (int i = 0; i < n; i++) {
//        printf("\nEnter type (1=student number, 2=register number) for student %d: ", i + 1);
//        scanf("%d", &s[i].type);
//
//        if (s[i].type == STU_NUMBER) {
//            printf("Enter student number, name, and grade: ");
//            scanf("%d %s %d", &s[i].id.stu_number, s[i].name, &s[i].grade);
//        }
//        else if (s[i].type == REG_NUMBER) {
//            printf("Enter register number, name, and grade: ");
//            scanf("%s %s %d", s[i].id.reg_number, s[i].name, &s[i].grade);
//        }
//        else {
//            printf("Invalid type. Please enter 1 or 2.\n");
//            i--;
//            continue;
//        }
//    }
//
//    printf("\nTYPE\tID\t\tNAME\tSCORE\tGRADE\n");
//    for (int i = 0; i < n; i++) {
//        print(s[i]);
//    }
//
//
//    free(s);
//    return 0;
//}