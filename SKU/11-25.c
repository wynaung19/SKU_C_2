//#include <stdio.h>
////#define SQUARE(x) ((x) * (x))
////int main(void)
////{
////	int x = 2;
////	printf("%d\n", SQUARE(x));
////	printf("%d\n", SQUARE(3));
////	printf("%f\n", SQUARE(1.2)); //매크로는 여러 자료형에 적용 가능
////	printf("%d\n", SQUARE(x + 3));
////	printf("%d\n", 100 / SQUARE(x));
////	printf("%d\n", SQUARE(++x)); //9가 아니라 16이 출력, 증감연산자 사용 X
////	return 0;
////}
//
////#define PRINT(exp) printf("exp=%d\n", exp);
////int main(void)
////{
////	int x = 2;
////	PRINT(x);
////	return 0;
////}
//
////#define PRINT(exp) printf(#exp" = %d\n", exp);
////int main(void)
////{
////	int x = 2;
////	PRINT(x);
////	return 0;
////}
//
////int main(void)
////{
////	printf("Date : %s\n" , __DATE__ );
////	printf("Time : " __TIME__ "\n");
////	printf("File : " __FILE__ "\n");
////	printf("Line : %d\n", __LINE__);
////	return 0;
////}
//
////#define DELUXE //이 부분 comment 처리해서 재실행 해보기
////int main(void)
////{
////#ifdef DELUXE
////	printf("딜럭스 버전입니다. \n");
////#endif
////	return 0;
////}
//
//////#define LINUX
////int main(void)
////{
////#ifdef LINUX
////	printf("리눅스 버전입니다. \n");
////#else
////	printf("윈도우 버전입니다. \n");
////#endif
////	return 0;
////}
//
////#define NATION 1 // Define NATION macro
////
////int main(void) // Add main function to encapsulate the code
////{
////#if NATION == 1
////   printf("안녕하세요?");
////#elif NATION == 2
////   printf("你好 ?");
////#else
////   printf("Hello ?");
////#endif
////
////   return 0; // Ensure proper return statement
////}
//
//#include "power.h"
//int main(void)
//{
//	int x, y;
//	printf("x의 값을 입력하시오:");
//	scanf("%d", &x);
//	printf("y의 값을 입력하시오:");
//	scanf("%d", &y);
//	printf("%d의 %d 제곱값은 %f\n", x, y, power(x, y));
//	return 0;
//}
//
////#include "rect.h"
////int main(void)
////{
////	RECT r = { 10,10, 20, 20 };
////	double area = 0.0;
////	draw_rect(&r);
////	move_rect(&r, 10, 20);
////	draw_rect(&r);
////	area = calc_area(&r);
////	draw_rect(&r);
////	return 0;
////}