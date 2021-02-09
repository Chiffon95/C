//1. 다음과 같은 모양을 출력하도록 코드를 작성하세요 (20점)
//*****
//****
//***
//**
//*
//
//2. 1부터 100까지의 정수 중 3의 배수를 모두 출력하세요. (30점)
//(continue를 사용할 것)
//
//3. 점수를 전달받아 A~F까지 학점으로 반환하는 함수를 만드세요(30점)
//
//4. 사용자가 -1을 입력할 때까지 입력받은 점수를 A~F까지의 학점으로 출력하세요.
//   이 때 3번문제에서 만든 함수를 호출해서 구현합니다 (20점)


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
		printf("잘못된 입력입니다");
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
		printf("점수를 입력하세요 (-1은 종료) \n");
		scanf("%d", &score);

		if (score == -1) break;

		score = quiz_part2_3(score);
		printf("귀하는 %c 학점입니다\n", score);

	} while (1);

}