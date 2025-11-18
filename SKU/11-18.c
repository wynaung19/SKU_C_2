#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main(void)
//{
//	FILE* fp;
//	char fname[128];
//	char buffer[256];
//	char word[256];
//	int line_num = 0;
//	printf("입력 파일 이름을 입력하시오: ");
//	scanf("%s", fname);
//	printf("탐색할 단어를 입력하시오: ");
//	scanf("%s", word);
//	if ((fp = fopen(fname, "r")) == NULL)
//	{
//		fprintf(stderr, "파일 % s을 열 수 없습니다.\n", fname);
//		exit(1);
//	}
//	while (fgets(buffer, 256, fp)) {
//		line_num++;
//		if (strstr(buffer, word)) {
//			printf("%s: %d 단어 %s이 발견되었습니다.\n", fname, line_num, word );
//		}
//	}
//	fclose(fp);
//	return 0;
//}

//int main(void) {
//	FILE* fp;
//	char fname[100];
//	int number, count = 0;
//	char name[20];
//	float score, total = 0.0;
//	printf("File Name : ");
//	scanf("%s", fname);
//	if ((fp = fopen(fname, "w")) == NULL) {
//		fprintf(stderr, "Cannot open %s", fname);
//		exit(1);
//	}
//	while (1) {
//		printf("ID,Name,Score : ");
//		scanf("%d ", &number);
//		if (number < 0) break;
//		scanf("%s %f", name, &score);
//		fprintf(fp, "%d %s %f", number, name, score);
//	}
//	fclose(fp);
//
//	if ((fp = fopen(fname, "r")) == NULL) {
//		fprintf(stderr, "ERROR : %s", fname);
//		exit(1);
//	}
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d %s %f", &number, name, &score);
//		total += score;
//		count++;
//	}
//	printf("AVG = %.2f\n", total / count);
//	fclose(fp);
//
//	return 0;
//
//}

//#define SIZE 5
//int main(void) {
//	int buffer[SIZE] = { 10, 20, 30, 40, 50 };
//	FILE* fp = NULL;
//	fp = fopen("binary.bin", "wb");
//	if (fp == NULL)
//	{
//		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
//		return 1;
//	}
//	fwrite(buffer, sizeof(int), SIZE, fp);
//	fclose(fp);
//	return 0;
//}
//#define SIZE 5
//int main(void) {
//	int buffer[SIZE];
//	FILE* fp = NULL;
//	fp = fopen("binary.bin", "rb");
//	if (fp == NULL) {
//		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
//		return 1;
//	}
//	fread(buffer, sizeof(int), SIZE, fp);
//	for (int i = 0; i < SIZE; i++)
//		printf("%d \t ", buffer[i]);
//	fclose(fp);
//	return 0;
//}

//#define SIZE 3
//struct student {
//	int number; // 학번
//	char name[20];
//	double gpa; // 평점
//};
//int main(void) {
//	struct student table[SIZE] = {
//	{ 1, "Kim", 3.99 },
//	{ 2, "Min", 2.68 },
//	{ 3, "Lee", 4.01 }
//	};
//	struct student s;
//	FILE* fp = NULL;
//	int i;
//	// 이진 파일을 쓰기 모드로 연다.
//	if ((fp = fopen("student.dat", "wb")) == NULL)
//	{
//		fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n");
//		exit(1);
//	}
//	fwrite(table, sizeof(struct student), SIZE, fp);
//	fclose(fp);
//	if ((fp = fopen("student.dat", "rb")) == NULL) //이진파일 읽기모드로 열기
//	{
//		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
//		exit(1);
//	}
//	for (i = 0;i < SIZE; i++) {
//		fread(&s, sizeof(struct student), 1, fp);
//		printf("학번 = %d, 이름 = %s, 평점 = %f\n", s.number, s.name, s.gpa);
//	}
//	fclose(fp);
//	return 0;
//}

//int main(void)
//{
//	FILE* src_file, * dst_file;
//	char filename[100];
//	char buffer[1024];
//	int r_count, w_count;
//	printf("이미지 파일 이름: ");
//	scanf("%s", filename);
//	src_file = fopen(filename, "rb");
//	dst_file = fopen("dp2.jpg", "wb");
//	if (src_file == NULL || dst_file == NULL) {
//		fprintf(stderr, "파일 열기 오류 \n");
//		return 1;
//	}
//	while ((r_count = fread(buffer, 1, sizeof(buffer), src_file)) > 0) {
//		w_count = fwrite(buffer, 1, r_count, dst_file);
//		if (w_count < 0) {
//			fprintf(stderr, "파일 쓰기 오류 \n");
//			return 1;
//		}
//		if (w_count < r_count) {
//			fprintf(stderr, "미디어 쓰기 오류 \n");
//			return 1;
//		}
//	}
//	printf("copy.jpg로 이미지 파일이 복사됨 \n");
//	fclose(src_file);
//	fclose(dst_file);
//	return 0;
//}

//int main(void) {
//	FILE* fp;
//	char buffer[100];
//	fp = fopen("sample.txt", "wt");
//	fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ", fp);
//	fclose(fp);
//	fp = fopen("sample.txt", "rt");
//	fseek(fp, 0, SEEK_SET);
//	printf("fseek(fp, 3, SEEK_SET) = %c \n", fgetc(fp));
//	fseek(fp, -2, SEEK_END);
//	printf("fseek(fp, -1, SEEK_END) = %c \n", fgetc(fp));
//	fclose(fp);
//	return 0;
//}

