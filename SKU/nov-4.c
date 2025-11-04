#include <stdio.h>

void set_pointer(char** q) {
	*q = "All that glisters is not gold.";
}
int main(void) {
	//one
	/*int i = 100;
	int* p = &i;
	int** q = &p;
	*p = 200;
	printf("i = %d\n", i);
	**q = 300;
	printf("i = %d\n", i);*/
	//two
	/*int i = 100;
	int* p = &i;
	int** q = &p;
	**q = 200;
	*p = 300;
	printf("%d %d %d\n", i, *p, **q);*/
	//three
	/*char* p;
	set_pointer(&p);
	printf("오늘의 격언: %s \n", p);*/
	//four
	//char* p;
	//set_pointer(p); //& 삭제 후 실행
	//printf("오늘의 격언: %s \n", p);
	return 0;
}