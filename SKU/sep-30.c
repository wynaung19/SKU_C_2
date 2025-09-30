#include <stdio.h>
//call by value
//void swap(int x, int y) {
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//	printf("x = %d, y = %d\n", x, y);
//}

// call by reference
//void swap(int* x, int* y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//	printf("x = %d, y = %d\n", *x, *y);
//}

//int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept)
//{
//	if (x1 == x2)
//		return -1;
//	else {
//		*slope = (float)(y2 - y1) / (float)(x2 - x1);
//		*yintercept = y1 - (*slope) * x1;
//		return 0;
//	}
//}

int main(void) {

	/*int i = 10;
	char c = 69;
	float f = 12.3;
	printf("i addr: %u\n", &i); 
	printf("c addr: %u\n", &c); 
	printf("f addr: %u\n", &f);*/

	/*int A = 10;
	double B = 12.3;
	int *p;
	float *p2 = NULL;
	p = &A;
	p2 = &B;
	printf("A addr: %u\n", &A);
	printf("B addr: %u\n", &B);
	printf("%.2f %.2f\n", A+B, *p + p2);*/

	/*int i = 10;
	int *p = NULL;
	p = &i;
	printf("i = %d\n", i);
	*p = 20;
	printf("i = %d\n", i);*/

	// will cause error
	/*int i;
	double* pd;
	pd = &i;
	*pd = 36.5;
	printf("i = %d\n", i);*/

	/*char* pc;
	pc = (char*)10000;
	printf("pc   : %d\n", pc);
	pc++;
	printf("pc   : %d\n", pc);
	printf("pc+2 : %d\n", pc + 2);*/

	/*int* pc;
	pc = (int*)10000;
	printf("pc   : %d\n", pc);
	pc++;
	printf("pc   : %d\n", pc);
	printf("pc+2 : %d\n", pc + 2);*/

	/*char* pc;
	int* pi;
	double* pd;
	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	printf("pc = %d,pi= %d,pd = %d\n", pc, pi, pd);
	pc++;
	pi++;
	pd++;
	printf("pc = %d,pi= %d,pd = %d\n", pc, pi, pd);*/

	/*int A = 10;
	int *p = &A;
	printf("A = %d\n", A);
	(*p)++;
	printf("A = %d\n", A);
	A = 1;
	++*p;
	printf("A = %d\n", A);*/

	/*int i = 10;
	int* pi = &i;
	printf("i = %d, pi = %p\n", *pi, pi);
	(*pi)++;
	printf("i = %d, pi = %p\n", *pi, pi);
	(*pi)++;
	printf("i = %d, pi = %p\n", i, pi);*/

	/*double f = 12.3;
	double* pd = &f;
	int* pi;

	pi = (int*)pd;
	printf("f = %.2f\n", f);
	printf("*pi = %d\n", *pi);*/

	/*int data = 0x0A0B0C0D;
	char* pc;
	pc = (char*)&data;
	for (int i = 0; i < 4; i++){
		printf("*(pc + %d) = %02X\n", i, *(pc + i));
	}*/

	/*int a = 10, b = 20;
	printf("a = %d, b = %d\n", a, b);*/
	//call by value
	/*swap(a, b);
	printf("a = %d, b = %d\n", a, b);*/

	// call by reference
	/*swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);*/

	/*float s, y;
	if (get_line_parameter(3,3,6,6, &s, &y) == 0)
		printf("slope = %.5f, yintercept = %.5f\n", s, y);
	else
		printf("error\n");*/

	int a[5] = { 10,20,30,40,50 };

	printf("&a[0] = %p\n", &a[0]);
	printf("&a[1] = %u\n", &a[1]);
	printf("&a[2] = %u\n", &a[2]);

	printf("a   = %u\n", a);

	return 0;
}