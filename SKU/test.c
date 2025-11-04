//#include <stdio.h>
//#include <string.h>
//
//struct Course {
//	char code[10];
//	char title[50];
//	int creditHours;
//};
//
//int main() {
//	struct Course c[3];
//	for (int i = 0; i < 3; i++) {
//		printf("Enter course code: ");
//		scanf("%s", c[i].code);
//		printf("Enter course title: ");
//		scanf(" %[^\n]s", c[i].title);
//		printf("Enter credit hours: ");
//		scanf("%d", &c[i].creditHours);
//	}
//	printf("\n%-10s %-50s %-15s\n", "Code", "Title", "Credit Hours");
//	for (int i = 0; i < 3; i++) {
//		printf("%-10s %-50s %-15d\n", c[i].code, c[i].title, c[i].creditHours);
//	}
//	
//    return 0;
//}