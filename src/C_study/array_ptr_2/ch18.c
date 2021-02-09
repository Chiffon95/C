#include <stdio.h>

void func_18_0() {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };

	int *ptrArr1 = arr1;
	int (*ptrArr2)[5] = arr2;

	for (int i = 0;i < 5;i++) {
		printf("%3d", *(ptrArr1 + i));
	}

	printf("\n");

	for (int i = 0;i < 3;i++) {
		for(int j = 0;j < 5;j++) {
			printf("%3d", ptrArr2[i][j]);
		}
		printf("\n");
	}
}