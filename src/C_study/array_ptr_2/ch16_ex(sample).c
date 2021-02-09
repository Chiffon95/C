#include<stdio.h>

//1. 2차원 배열을 아래와 같이 초기화하고 전체 값의 총합과 평균을 구하라
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

//2. 8*9 배열을 만들고 구구단 결과를 저장하고 출력
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

//4. 배열과 실수형 변수의 포인터를 전달받아 배열 모든 요소의 평균을 변수형 포인터를 통해 반환하는 함수를 구현
void sample_16_Arr_4(double* arr, int rowCnt, int colCnt, double* pAve) {
	double arrSum = 0;

	for (int i = 0;i < rowCnt;i++) {
		for (int j = 0;j < colCnt - 1;j++) {
			arrSum += *(arr + i * colCnt + j);
		}

	}
	*pAve = arrSum / (rowCnt * colCnt);
}


//3. 5x4 실수형 2차원 배열 선언 후 사용자로부터 5명의 국어, 영어, 수학, 점수를 입력받습니다.한 행의 마지막 열에 세 과목의 평균을 저장
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

//5. 3번 코드에서 평균 구하는 것을 4번 함수를 사용하도록 변경

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

//2. 8*9 배열을 만들고 구구단 결과를 저장하고 출력
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

//3. 5x4 실수형 2차원 배열 선언 후 사용자로부터 5명의 국어, 영어, 수학, 점수를 입력받습니다
// .한 행의 마지막 열에 세 과목의 평균을 저장
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
	//	printf("%d 학생의 국어, 영어, 수학 점수를 입력하세요", i + 1);
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

//4. 배열과 실수형 변수의 포인터를 전달받아 배열 모든 요소의 평균을 변수형 포인터를 통해 반환하는 함수를 구현
void func16_ex_4(double* pArr, int len, double* pAvg) {

	int sum = 0;

	for (int i = 0; i < len; i++) {
		sum += pArr[i];
	}

	*pAvg = (double)sum / len;

}

//5. 3번 코드에서 평균 구하는 것을 4번 함수를 사용하도록 변경
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
	//	printf("%d 학생의 국어, 영어, 수학 점수를 입력하세요", i + 1);
	//	scanf("%d%d%d", &score[i][0], &score[i][1], &score[i][2]);
	//}

	for (int i = 0; i < 5; i++) {

		func16_ex_4(score[i], 3, &score[i][3]);

	}

	return;

}