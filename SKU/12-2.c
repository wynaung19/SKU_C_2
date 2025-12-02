#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(void){
//	int* list;
//	list = (int*)malloc(3 * sizeof(int));
//	list[0] = 10;
//	list[1] = 20;
//	list[2] = 30;
//	for (int i = 0; i < 3; i++)	{
//		printf("%d\n", list[i]);
//	}
//	free(list);
//
//	return 0;
//}

//int main(void) {
//	int* list;
//	int i, stu;
//	printf("학생 수: ");
//	scanf_s("%d", &stu);
//	list = (int*)malloc(stu * sizeof(int));
//	if (list == NULL) {
//		fprintf(stderr, "메모리 할당 오류 \n");
//		return 1;
//	}
//	for (i = 0; i < stu; i++) {
//		printf("점수 입력: ");
//		scanf_s("%d", &list[i]);
//	}
//	printf("\n=========== \n");
//	int avg = 0;
//	for (i = 0; i < stu; i++) {
//		avg += list[i];
//		printf("학생 %d : %d \n", i + 1, list[i]);
//	}
//	printf("=========== \n");
//	printf("평균 점수: %d \n", avg / stu);
//	free(list);
//	return 0;
//}
#include "book.c"


int main(void) {
	struct Book* book;
	int i, n;
	printf("Book Count : ");
	scanf_s("%d", &n);
	book = (BOOK*)malloc(n * sizeof(BOOK));
	if (book == NULL) {
		fprintf(stderr, "메모리 할당 오류 \n");
		return 1;
	}
	for (i = 0; i < n; i++) {
		printf("Book Number : ");
		scanf_s("%d", &book[i].num);
		printf("Book Title : ");
		scanf_s(" %[^\n]s", book[i].title, sizeof(book[i].title));
	}
	printf("\n===== Book List ===== \n");
	for (i = 0; i < n; i++) {
		printf("Book Number : %d \n", book[i].num);
		printf("Book Title : %s \n", book[i].title);
	}
	free(book);
	return 0;
}