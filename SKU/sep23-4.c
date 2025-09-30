//#include <stdio.h>
////void display(int image[8][16])
////{
////	for (int r = 0; r < 8; r++) {
////		for (int c = 0; c < 16; c++)
////		{
////			if (image[r][c] == 0)
////				printf("@");
////			else
////				printf("_");
////		}
////		printf("\n");
////	}
////}
////void inverse(int img[8][16])
////{
////	for (int r = 0; r < 8; r++) {
////		for (int c = 0; c < 16; c++) {
////			if (img[r][c] == 0)
////				img[r][c] = 1;
////			else
////				img[r][c] = 0;
////		}
////	}
////}
////int main(void) {
////	int image[8][16] = {
////	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
////	{ 1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1 },
////	{ 1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1 },
////	{ 1,1,1,0,0,0,1,1,0,0,1,1,1,1,1,1 },
////	{ 1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1 },
////	{ 1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1 },
////	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1 },
////	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 } };
////	printf("Image\n");
////	display(image);
////	inverse(image);
////	printf("\n\n\n");
////	display(image);
////	return 0;
////}
//
//int main(void)
//{
//	char board[3][3];
//	int x, y, k, i;
//	for (x = 0; x < 3; x++)
//		for (y = 0; y < 3; y++)
//			board[x][y] = ' ';
//
//	for (k = 0; k < 9; k++) {
//		printf("(x, y) : ");
//		scanf("%d %d", &x, &y);
//		board[x][y] = (k % 2 == 0) ? 'X' : 'O';
//		for (i = 0; i < 3; i++)
//		{
//			printf("---|---|---\n");
//			printf("%2c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//			//printf("%3c|%3c|%3c
//		}
//		printf("---|---|---\n");
//	}
//	return 0;
//}