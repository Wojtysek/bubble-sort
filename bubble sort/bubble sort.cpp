#include <stdio.h>

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");
}

void prohodit(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int size) {
	for (int j = 0; j < size - 1; j++) {
		for (int i = 0; i < size - j - 1; i++) {
			if (arr[i] > arr[i + 1])
				prohodit(&arr[i], &arr[i + 1]);
		}
	}
}

int main(void) {

	int pole[] = { 64,34,85,7,4,2,35,69 };
	int pocet = sizeof(pole) / sizeof(pole[0]);
	printArray(pole, pocet);
	bubbleSort(pole, pocet);
	printArray(pole, pocet);
}