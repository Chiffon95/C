#include <stdio.h>


int Q2_solve() {
	int NUM_1 = 0, NUM_2 = 0;
	int RLT = 0;
	printf("두 개의 정수를 입력하시오. \n");
	scanf("%d %d", &NUM_1, &NUM_2);
	RLT = Q2(NUM_1, NUM_2);
	printf("최대 공약수 : %d", RLT);

	return 0;
}

int Q2(int f_num, int b_num) {
	int SWT = 0;
	while (f_num) {
		if (b_num > f_num) {
			SWT = b_num;
			b_num = f_num;
			f_num = SWT;
		}
		f_num -= b_num;
	}
	return b_num;
}