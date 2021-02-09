#include<stdio.h>

//1. 2���� �迭�� �Ʒ��� ���� �ʱ�ȭ�ϰ� ��ü ���� ���հ� ����� ���϶�
//{ 5, 7, 9, 4, 5 },
//{ 10,33,10,11,10 },
//{ 20,26,70,6,20 },
//{ 11,30,24,30,12 }
void sample_16_Arr_1() {
	int arr[][5] = {
		{ 5, 7, 9, 4, 5 },
		{ 10,33,10,11,10 },
		{ 20,26,70,6,20 },
		{ 11,30,24,30,12 }
		};
	int arrSize = sizeof(arr);
	int rowSize =  sizeof(arr[0]);
	int rowCnt = arrSize / rowSize;
	int colCnt = rowSize / sizeof(arr[0][0]);
	int arrSum = 0; double arrAve = 0;

	for (int i = 0;i < rowCnt;i++) {
		for (int j = 0;j < colCnt;j++) {
			arrSum += arr[i][j];
		}
	}
	arrAve = (double)arrSum / arrSize;

	printf("Array sum ; %d, ave : %.2lf", arrSum, arrAve);
}

//2. 8*9 �迭�� ����� ������ ����� �����ϰ� ���
//   2 4 6 8 10 12 14 16 118
//   3 6 9 12 15 18 21 24 27
void sample_16_Arr_2() {
	int guguDan[8][9];
	int arrSize = sizeof(guguDan);
	int rowSize = sizeof(guguDan[0]);
	int rowCnt = arrSize / rowSize;
	int colCnt = rowSize / sizeof(guguDan[0][0]);
	
	for (int i = 0;i < rowCnt;i++) {
		for (int j = 0; j< colCnt;j++) {
			guguDan[i][j] = (i + 2) * (j + 1);
		}
	}

	for (int i = 0;i < rowCnt;i++) {
		for (int j = 0; j < colCnt;j++) {
			printf("%3d", guguDan[i][j]);
		}
		printf("\n");
	}
}

//4. �迭�� �Ǽ��� ������ �����͸� ���޹޾� �迭 ��� ����� ����� ������ �����͸� ���� ��ȯ�ϴ� �Լ��� ����
void sample_16_Arr_4(double* arr, int rowCnt, int colCnt, double* pAve) {
	double arrSum = 0;

	for (int i = 0;i < rowCnt;i++) {
		for (int j = 0;j < colCnt - 1;j++) {
			arrSum += *(arr + i * colCnt + j);
		}

	}
	*pAve = arrSum / (rowCnt * colCnt);
}


//3. 5x4 �Ǽ��� 2���� �迭 ���� �� ����ڷκ��� 5���� ����, ����, ����, ������ �Է¹޽��ϴ�.�� ���� ������ ���� �� ������ ����� ����
void sample_16_Arr_3() {
	double arr[5][4];
	int arrSize = sizeof(arr);
	int rowSize = sizeof(arr[0]);
	int rowCnt = arrSize / rowSize;
	int colCnt = rowSize / sizeof(arr[0][0]);
	double arrSum = 0; double arrAllAve = 0;

	for (int i = 0;i < rowCnt;i++) {
		printf("User %d Entering \n", i + 1);
		for (int j = 0;j < colCnt - 1;j++) {
			scanf("%lf", &arr[i][j]);
			arrSum += arr[i][j];
		}
		arr[i][colCnt - 1] = arrSum / colCnt;
		arrSum = 0;
	}

	for (int i = 0;i < rowCnt;i++) {
		for (int j = 0;j < colCnt;j++) {
			printf("%.2lf ", arr[i][j]);
		}
		printf("\n");
	}
	sample_16_Arr_4(arr, rowCnt, colCnt, &arrAllAve);

	printf("All ave : %2lf", arrAllAve);
}

//5. 3�� �ڵ忡�� ��� ���ϴ� ���� 4�� �Լ��� ����ϵ��� ����

void func16_ex_1() {

	int total = 0;
	double avg;

	int arr[4][5] = {
					{ 5, 7, 9, 4, 5 },
					{ 10,33,10,11,10 },
					{ 20,26,70,6,20 },
					{ 11,30,24,30,12 } };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			total += arr[i][j];
		}
	}

	avg = (double)total / 20;

	return;

}

//2. 8*9 �迭�� ����� ������ ����� �����ϰ� ���
void func16_ex_2() {
	int arr[8][9];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i + 2) * (j + 1);
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

}

//3. 5x4 �Ǽ��� 2���� �迭 ���� �� ����ڷκ��� 5���� ����, ����, ����, ������ �Է¹޽��ϴ�
// .�� ���� ������ ���� �� ������ ����� ����
void func16_ex_3() {

	//double score[5][4] = { 0 };
	int sum;

	double score[5][4] = {
			{ 5, 7, 9 },
			{ 10,33,1 },
			{ 20,26,70 },
			{ 11,30,24 },
			{ 50, 55, 60} };
	//for (int i = 0; i < 5; i++) {
	//	printf("%d �л��� ����, ����, ���� ������ �Է��ϼ���", i + 1);
	//	scanf("%lf%lf%lf", &score[i][0], &score[i][1], &score[i][2]);
	//}

	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
		}
		score[i][3] = sum / 3;
	}

	return;

}

//4. �迭�� �Ǽ��� ������ �����͸� ���޹޾� �迭 ��� ����� ����� ������ �����͸� ���� ��ȯ�ϴ� �Լ��� ����
void func16_ex_4(double* pArr, int len, double* pAvg) {

	int sum = 0;

	for (int i = 0; i < len; i++) {
		sum += pArr[i];
	}

	*pAvg = (double)sum / len;

}

//5. 3�� �ڵ忡�� ��� ���ϴ� ���� 4�� �Լ��� ����ϵ��� ����
void func16_ex_5() {

	//double score[5][4] = { 0 };
	int sum;

	double score[5][4] = {
				{ 5, 7, 9 },
				{ 10,33,1 },
				{ 20,26,70 },
				{ 11,30,24 },
				{ 50, 55, 60} };
	//for (int i = 0; i < 5; i++) {
	//	printf("%d �л��� ����, ����, ���� ������ �Է��ϼ���", i + 1);
	//	scanf("%d%d%d", &score[i][0], &score[i][1], &score[i][2]);
	//}

	for (int i = 0; i < 5; i++) {

		func16_ex_4(score[i], 3, &score[i][3]);

	}

	return;

}