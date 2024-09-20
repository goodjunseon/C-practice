#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

void Bsort(int list[], int n);

int main() {

	FILE* fi;

	int numbers[25] = { 0, };

	fi = fopen("1_input.dat", "r");

	if (fi == NULL) {
		printf("파일을 읽지 못했습니다.");
		return 1;
	}
	for (int i = 0; i < 25; i++) {
		fscanf(fi, "%d", &numbers[i]);
	}

	fclose(fi);
	Bsort(numbers, 25);
	printf("정렬된 숫자:\n");
	for (int i = 0; i < 25; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");

	return 0;
}
void Bsort(int list[], int n) {
	int i, j, temp;

	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}