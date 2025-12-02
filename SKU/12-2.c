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
//#include "book.c"
//
//
//int main(void) {
//	struct Book* book;
//	int i, n;
//	printf("Book Count : ");
//	scanf_s("%d", &n);
//	book = (BOOK*)malloc(n * sizeof(BOOK));
//	if (book == NULL) {
//		fprintf(stderr, "메모리 할당 오류 \n");
//		return 1;
//	}
//	for (i = 0; i < n; i++) {
//		printf("Book Number : ");
//		scanf_s("%d", &book[i].num);
//		printf("Book Title : ");
//		scanf_s(" %[^\n]s", book[i].title, sizeof(book[i].title));
//	}
//	printf("\n===== Book List ===== \n");
//	for (i = 0; i < n; i++) {
//		printf("Book Number : %d \n", book[i].num);
//		printf("Book Title : %s \n", book[i].title);
//	}
//	free(book);
//	return 0;
//}

//int main(void)
//{
//	char* list[10];
//	for (int i = 0; i < 10; i++) {
//		list[i] = (char*)malloc(100 * sizeof(char));
//		if (list[i] == NULL) {
//			printf("malloc() 실패!\n\n");
//			exit(1);
//		}
//		strcpy(list[i], "test string"); //strcpy_s(list[i], 10, "test string");
//	}
//	for (int i = 0; i < 10; i++)
//		printf("문자열 %d: %s\n", i, list[i]);
//
//	free(list);
//	return 0;
//}

//int main(void){
//	int* ar;
//	int size = 5; 
//	int i;
//	ar = (int*)calloc(size, sizeof(int));
//	for (i = 0; i < size; ++i) {
//		ar[i] = i + 1;
//		printf("%d ", ar[i]);
//	}
//	free(ar);
//	return 0;
//}

//int main() {
//	printf("정수 2개를 저장할 공간이 필요 \n");
//	int* list = (int*)malloc(sizeof(int) * 2);
//	int i;
//	list[0] = 10;
//	list[1] = 20;
//	printf("정수 3개를 저장할 공간으로 확장 \n");
//	list = (int*)realloc(list, sizeof(int) * 3); //함수 실패할 경우 위험
//	list[2] = 30;
//	for (i = 0; i < 3; i++)
//		printf("%d ", list[i]);
//	printf("\n");
//	free(list);
//	return 0;
//}

//int main() {
//	printf("정수 2개를 저장할 공간이 필요 \n");
//	int* list = (int*)malloc(sizeof(int) * 2);
//	int I, * temp;
//	list[0] = 10;
//	list[1] = 20;
//	printf("정수 3개를 저장할 공간으로 확장 \n");
//	temp = (int*)realloc(list, sizeof(int) * 3);
//	if (temp == NULL) {
//		printf("realloc 실패\n");
//		free(list);
//		return 1;
//	}
//	list = temp;
//	list[2] = 30;
//	for (int i = 0; i < 3; i++)
//		printf("%d ", list[i]);
//	printf("\n");
//	free(list);
//	return 0;
//}

typedef struct NODE {
	int data;
	struct NODE* link;
} NODE;

int main(void) {
	NODE* p1;
	p1 = (NODE*)malloc(sizeof(NODE));
	p1->data = 10;
	p1->link = NULL;

	NODE* p2;
	p2 = (NODE*)malloc(sizeof(NODE));
	p2->data = 20;
	p2->link = NULL;
	p1->link = p2;

	printf("%d %d\n", p1->data, p1->link->data);
	free(p2);
	free(p1);
	return 0;
}