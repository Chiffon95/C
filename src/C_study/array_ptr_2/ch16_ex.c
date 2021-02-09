#include<stdio.h>

//{ 5, 7, 9, 4, 5 },
//{ 10,33,10,11,10 },
//{ 20,26,70,6,20 },
//{ 11,30,24,30,12 }
void q_16_1() {
	int arr_2[4][5] = {
		{ 5, 7, 9, 4, 5 },
		{ 10,33,10,11,10 },
		{ 20,26,70,6,20 },
		{ 11,30,24,30,12 }
	};
	int sum = 0;
	double ave = 0;

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 5;j++) {
			sum += arr_2[i][j];
		}
	}
	ave = (double)sum / sizeof(arr_2);

	printf("val sum : %d, val ave : %.4lf", sum, ave);
}
//2. 8 * 9 �迭�� ����� ������ ����� �����ϰ� ���
//2 4 6 8 10 12 14 16 118
//3 6 9 12 15 18 21 24 27
void q_16_2() {
	int arr[8][9];
	int size = sizeof(arr);
	int row_size = sizeof(arr[0]);
	int row_cnt = size / row_size;
	int col_cnt = row_size / sizeof(arr[0][0]);

	for (int i = 0;i < row_cnt;i++) {
		for (int j = 0;j < col_cnt;j++) {
			arr[i][j] = (i + 2) * (j + 1);
		}
	}

	for (int i = 0;i < row_cnt;i++) {
		for (int j = 0;j < col_cnt;j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}
//3. 5x4 ������ 2���� �迭 ���� �� ����ڷκ��� 5���� ����, ����, ����, ������ �Է¹޽��ϴ�.�� ���� ������ ���� �� ������ ����� ����
void q_16_3() {
	double score[5][5] = { 0 };
	int size = sizeof(score);
	int row_size = sizeof(score[0]);
	int row_cnt = size / row_size;
	int col_cnt = row_size / sizeof(score[0][0]);

	for (int i = 0;i < row_cnt;i++) {
		printf("Enter korean score, english score, math score \n");
		for (int j = 0;j < col_cnt - 2;j++) {
			scanf("%lf", &score[i][j]);
			score[i][col_cnt - 2] += score[i][j];
		}
		score[i][col_cnt - 1] = score[i][col_cnt - 2] / (col_cnt - 2);
	}

	printf("koeran - english - math - sum - ave \n");

	for (int i = 0;i < row_cnt;i++) {
		printf("[%d] score - ", i + 1);
		for (int j = 0;j < col_cnt;j++) {
			printf("%.2lf ", score[i][j]);
		}
		printf("\n");
	}

}

//4. �迭�� �Ǽ��� ������ �����͸� ���޹޾� �迭 ��� ����� ����� ������ �����͸� ���� ��ȯ�ϴ� �Լ��� ����
int getAve_16_4(int* arr, int row_cnt,int col_cnt, double* arrAve) {
	int arrSum = 0;

	for (int i = 0;i < row_cnt;i++) {
		for (int j = 0;j < col_cnt;j++) {
			arrSum += *(arr + i * col_cnt + j);
		}
	}
	*arrAve = (double) arrSum / (row_cnt * col_cnt);

	return arrSum;
}
void q_16_4() {
	int arr[5][5];
	int size = sizeof(arr);
	int row_size = sizeof(arr[0]);
	int row_cnt = size / row_size;
	int col_cnt = row_size / sizeof(arr[0][0]);
	int sum = 0; double ave = 0;

	sum = getAve_16_4(arr, row_cnt, col_cnt, &ave);

	printf("val sum : %d, val average : %.2lf", sum, ave);
}

//5. 3�� �ڵ忡�� ��� ���ϴ� ���� 4�� �Լ��� ����ϵ��� ����
void getAve_16_5(int* arr, int row_cnt, int col_cnt) {
	int arrSum = 0;
	
	printf("Enter korean score, english score, math score \n");

	for (int i = 0;i < row_cnt;i++) {
		for (int j = 0;j < col_cnt;j++) {
			scanf("%lf", (arr + 1 * i + j))
				;
			arrSum += *(arr + i * col_cnt + j);
			*(arr + row_cnt * i + col_cnt - 2) = (double)arrSum / (row_cnt * col_cnt);
		}
	}
}
void q_16_5() {
	double score[5][5] = { 0 };
	int size = sizeof(score);
	int row_size = sizeof(score[0]);
	int row_cnt = size / row_size;
	int col_cnt = row_size / sizeof(score[0][0]);

	//for (int i = 0;i < row_cnt;i++) {
	//	printf("Enter korean score, english score, math score \n");
	//	for (int j = 0;j < col_cnt - 2;j++) {
	//		scanf("%lf", &score[i][j]);
	//		score[i][col_cnt - 2] += score[i][j];
	//	}
	//	score[i][col_cnt - 1] = score[i][col_cnt - 2] / (col_cnt - 2);
	//}

	getAve_16_5(score, row_cnt, col_cnt);

	printf("koeran - english - math - sum - ave \n");

	for (int i = 0;i < row_cnt;i++) {
		printf("[%d] score - ", i + 1);
		for (int j = 0;j < col_cnt;j++) {
			printf("%.2lf ", score[i][j]);
		}
		printf("\n");
	}

}
