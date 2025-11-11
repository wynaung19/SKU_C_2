//#include <stdio.h>
//int main(int argc, char* argv[])
//{
//	int i = 0;
//	for (i = 0;i < argc; i++)
//		printf("명령어 라인에서 %d번째 문자열 = %s\n", i, argv[i]);
//	return 0;
//}
//#include <stdlib.h>
//int main(int argc, char* argv[])
//{
//	double mile, km;
//	if (argc != 2) {
//		printf("사용 방법: mile2km 거리\n");
//		return 1;
//	}
//	mile = atof(argv[1]);
//	km = 1.609 * mile;
//	printf("입력된 거리는 %f km입니다. \n", km);
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	if (remove("wai.txt") == -1) // “dog.jpg”
		printf("파일을 삭제할 수 없습니다.!\n");
	else
		printf("파일 삭제완료!\n");
	/*fp = fopen("wai.txt", "w");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");
	fclose(fp);*/
	return 0;
}