//#include <stdio.h>
//
//void set_pointer(char** q) {
//	*q = "All that glisters is not gold.";
//}
////eight
//int add(int, int);
//int sub(int, int);
//
//int main(void) {
//	//one
//	/*int i = 100;
//	int* p = &i;
//	int** q = &p;
//	*p = 200;
//	printf("i = %d\n", i);
//	**q = 300;
//	printf("i = %d\n", i);*/
//	//two
//	/*int i = 100;
//	int* p = &i;
//	int** q = &p;
//	**q = 200;
//	*p = 300;
//	printf("%d %d %d\n", i, *p, **q);*/
//	//three
//	/*char* p;
//	set_pointer(&p);
//	printf("오늘의 격언: %s \n", p);*/
//	//four
//	//char* p;
//	//set_pointer(p); //& 삭제 후 실행
//	//printf("오늘의 격언: %s \n", p);
//	//five
//	/*int i;
//	int a = 10, b = 20, c = 30, d = 40, e = 50;
//	int* pa[5] = { &a, &b, &c, &d, &e };
//	for (i = 0; i < 5; i++)
//		printf("%p %d\n", pa[i], *pa[i]);*/
//
//	//six
//	/*char* fruits[] = { "apple", "banana", "cherry", "date", "elderberry" };
//	int n = sizeof(fruits) / sizeof(fruits[0]);
//	for (int i = 0; i < n; i++)
//		printf("%s\n", fruits[i]);*/
//	//seven
//	/*int sub(int, int);
//	int (*pf)(int, int);
//	pf = sub;
//	printf("Result: %d\n", pf(10, 5));*/
//	int res;
//	int (*pf[2])(int, int) = { add, sub };
//	res = pf[0](10, 5);
//	printf("Addition: %d\n", res);
//	res = pf[1](10, 5);
//	printf("Subtraction: %d\n", res);
//
//	return 0;
//}
//int add(int a, int b) {
//	return a + b;
//}
//int sub(int a, int b) {
//	return a - b;
//}