//#include <stdio.h>
//#define SIZE 16
//int binarySearch(int list[], int n, int key) {
//    int low = 0;
//	int high = n - 1;
//	while (low <= high) {
//		int mid = (low + high) / 2;
//		if (list[mid] == key) {
//			return mid;
//		}
//		else if (list[mid] < key) {
//			low = mid + 1;
//		}
//		else {
//			high = mid - 1;
//		}
//	}
//	return -1;
//}
//int main(void) {
//
//    int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };
//
//	int key;
//
//	printf("Enter a number to search: ");
//	scanf_s("%d", &key);
//	int index = binarySearch(grade, SIZE, key);
//	if (index == -1)
//		printf("%d does not exists.\n", key);
//	else
//	{
//		printf("Found %d at %d.\n", key, index);
//	}
//    return 0;
//}