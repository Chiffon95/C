#include <stdio.h>

void func_16_1() {
	int arr1[2][3] = { 1,2,3,4,5,6 };
	int arr2[2][5] = { 5,7,8,9,11,13,15 };

	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 3;j++) {
			printf("%d, ", arr1[i][j]);
		}
	}
	printf("\n");
}
void func_16_2() {
	//array intializiation - all possible
	int arr[3][3] = {
		{1,2,3,},
		{4,5,6,},
		{7,8,9} };

	int arr2[3][3] = {
		{1},
		{4,5},
		{7,8,9}
	};

	int arr3[3][3] = { 1,2,3,4,5,6,7 };
}
void func_16_3() {
	int arr[3][4];
	for (int x = 0;x < 3;x++) {
		for (int y = 0;y < 4;y++) {
			arr[x][y] = 10 * ( x + 1) + (y + 1);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

}
void func_16_4() {
	int arr[5][2], households = 0;
	for (int x = 0;x < 5;x++) {
		for (int y = 0;y < 2;y++) {
			printf("[%d]floor - [%d]room households : ",x + 1, y + 1);
			scanf("%d", &arr[x][y]);
		}
	}

}
void q_16_0() {
	//array, row, col_cnt, row_cnt check
	int arr[3][8];

	int size = sizeof(arr);
	int row_size = sizeof(arr[0]);
	int row_cnt = size / row_size;
	int col_cnt = row_size / sizeof(arr[0][0]);

	printf("arr size : %d \n", size);
	printf("row size : %d \n", row_size);
	printf("row cnt : %d \n", row_cnt);
	printf("col cnt : %d \n", col_cnt);

}