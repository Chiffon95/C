#include <stdio.h>
/* 1 ~ 9 ������ �� ���� ������ �Է¹޾� �ּҰ� ����
����Լ��� ����Ͽ� �ִ밪�� �ɰ�� �����ϵ��� �ۼ�*/
int Q1(int NUM1, int NUM2);

int Q1_solve() {
	int NUM1 = 0, NUM2 = 0;
	int TOK = 0;
	printf("1 ~ 9 ������ �� ���� ������ �Է��Ͻÿ�. \n");
	scanf("%d %d", &NUM1, &NUM2);
	if (NUM1 > NUM2) {
		TOK = NUM2; NUM2 = NUM1; NUM1 = TOK;
	}
	printf("%d, %d", NUM1, NUM2);
	printf("�� ������ ������ ������ \n");
	Q1(NUM1, NUM2);
	return 0;
}

int Q1(int NUM_1, int NUM_2) {
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d \n", NUM_1, i, NUM_1 * i);
	}
	if (NUM_1 == NUM_2)
		return;
	Q1(NUM_1+1, NUM_2);

	return;
}