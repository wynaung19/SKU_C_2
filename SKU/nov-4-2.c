//#include <stdio.h>
//void menu(void); // 함수 원형 정의
//int add(int x, int y);
//int sub(int x, int y);
//int mul(int x, int y);
//int div(int x, int y);
//void menu(void)
//{
//	printf("=====================\n");
//	printf("0. 덧셈\n");
//	printf("1. 뺄셈\n");
//	printf("2. 곱셈\n");
//	printf("3. 나눗셈\n");
//	printf("4. 종료\n");
//	printf("=====================\n");
//}
//int main(void) {
//	int choice, result, x, y;
//	int (*pf[4])(int, int) = { add, sub, mul, div };
//	while (1)
//	{
//		menu();
//		printf("메뉴를 선택하시오:");
//		scanf("%d", &choice);
//		if (choice < 0 || choice >= 4)
//			break;
//		printf("2개의 정수를 입력하시오:");
//		scanf("%d %d", &x, &y);
//		result = pf[choice](x, y); //함수 호출
//		printf("연산 결과 = %d\n", result);
//	}
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y) {
//	return x
//		- y;
//}
//int mul
//(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y) {
//	return x / y;
//}

//#include <stdio.h>
//int main(void) {
//	int m[3][3] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
//	printf("m = %p\n", m);
//	printf("m[0] = %p\n", m[0]); //0행의 시작 주소
//	printf("m[1] = %p\n", m[1]);
//	printf("m[2] = %p\n", m[2]);
//	printf("&m[0][0] = %p\n", &m[0][0]); //0행의 시작 주소
//	printf("&m[1][0] = %p\n", &m[1][0]);
//	printf("&m[2][0] = %p\n", &m[2][0]);
//	return 0;
//}

#include <stdio.h>
#define ROWS 4
#define COLS 3
double get_row_avg(int m[ROWS][COLS], int r);
double get_total_avg(int m[ROWS][COLS]);
int main() {
	int m[ROWS][COLS] = { {10,20,30}, {10,20,30},
	{10,20,30}, {10,20,30} };
	int sum;
	int total;
	sum = get_row_avg(m, 2);
	total = get_total_avg(m);
	printf("main total= %2.2lf\n",
		(double)total);
	return 0;
}
double get_row_avg(int m[ROWS][COLS], int r)
{
	int* p, * endp;
	double sum = 0.0;
	p = &m[r][0];
	endp = &m[r][COLS];
	while (p < endp)
		sum += *p++; //이 부분 두줄로 해보기
	sum /= COLS; //평균 계산
	return sum;
}

double get_total_avg(int m[ROWS][COLS])
{
	int* p, * endp;
	double sum = 0.0;
	p = &m[0][0];
	endp = &m[ROWS - 1][COLS - 1];
	while (p < endp)
		sum += *p++;
	sum /= ROWS * COLS;
	printf("subprogram total= %2.2lf\n",
		sum);
	return sum;
}
