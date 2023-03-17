#include <stdio.h>
#include <stdlib.h>
int main () {
	//set array in cycle for
	const int ARRAY_SIZE   = 10;
	const int LEFT_BORDER  = -100;
	const int RIGHT_BORDER = 100;
	int v[ARRAY_SIZE];
	int sumElements = 0;
	for (int i=0; i<ARRAY_SIZE; i++) {
		v[i] = rand()%(RIGHT_BORDER - LEFT_BORDER + 1) + LEFT_BORDER;
	}
	printf("Test v5.01: OK\n");
	printf("ARRAY_SIZE: %d.\n", ARRAY_SIZE);
	printf("LEFT_BORDER: %d.\n", LEFT_BORDER);
	printf("RIGHT_BORDER: %d.\n", RIGHT_BORDER);
	for (int i=0; i<ARRAY_SIZE; i++) {
		sumElements += v[i];
	}
	printf("Summa elevenov massiva: %d\n", sumElements);
	return 0;
}

