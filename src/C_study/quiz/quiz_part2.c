//1. ������ ���� ����� ����ϵ��� �ڵ带 �ۼ��ϼ��� (20��)
//*****
//****
//***
//**
//*
//
//2. 1���� 100������ ���� �� 3�� ����� ��� ����ϼ���. (30��)
//(continue�� ����� ��)
//
//3. ������ ���޹޾� A~F���� �������� ��ȯ�ϴ� �Լ��� ���弼��(30��)
//
//4. ����ڰ� -1�� �Է��� ������ �Է¹��� ������ A~F������ �������� ����ϼ���.
//   �� �� 3���������� ���� �Լ��� ȣ���ؼ� �����մϴ� (20��)


#include <stdio.h>

void quiz_part2_1() {

	for (int i = 5; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void quiz_part2_2() {

	for (int num = 1; num <= 100; num++) {

		if (num % 3 != 0) continue;

		printf("%d, ", num);
	}
}

char quiz_part2_3(int score) {

	char ch_score;

	if (score < 0 || score > 100) {
		printf("�߸��� �Է��Դϴ�");
		return '\0';
	}

	score /= 10;

	switch (score) {
	case 10:
	case 9:
		ch_score = 'A'; break;
	case 8:
		ch_score = 'B'; break;
	case 7:
		ch_score = 'C'; break;
	case 6:
		ch_score = 'D'; break;
	default :
		ch_score = 'F';
	}

	return ch_score;

}

void quiz_part2_4() {

	int score;

	do {
		printf("������ �Է��ϼ��� (-1�� ����) \n");
		scanf("%d", &score);

		if (score == -1) break;

		score = quiz_part2_3(score);
		printf("���ϴ� %c �����Դϴ�\n", score);

	} while (1);

}