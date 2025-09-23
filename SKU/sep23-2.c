#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 5
int main(void) {
	int s[ROWS][COLS];

	srand((unsigned)time(NULL));

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			s[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%02d ", s[i][j]);
		}
		printf("\n");
	}

	return 0;
}