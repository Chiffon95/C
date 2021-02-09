#include <stdio.h>

void func_7_1() {
	//print "Hello moble!" 10 times (i++ up)
	int i = 0;
	while (i < 10) {
		printf("Hello moble! \n");
		i++;
	}
}
void func_7_2(){
	//printf Hello moble!" 10 times (i++ down)
	int i = 0;
	while (i < 10) {
		i++;
		printf("%d. Hello moble! \n", i);
	}

}
void ex_7_1() {
	//input score and sum (while)
	int SCORE;
	int SUM = 0, COUNT =0;
	while (COUNT < 5) {
		printf("Enter score \n");
		scanf("%d", &SCORE);
		SUM += SCORE;
		COUNT++;
	}
	printf("Sum : %d", SUM);
}
void ex_7_2() {
	//sum from %d_1 to %d_2
	int SUM = 0, COUNT = 0;
	printf("From %d", COUNT+1);

	while (COUNT < 100) {
		COUNT++;
		SUM += COUNT;
	}
	printf("to %d (sum) : %d", COUNT,SUM);
}
void func_7_3() {
	//plus 10, 10 times
	int i = 0, j = 0;
	int num = 0;
	while (i < 10) {
		while (j < 10) {
			num++;
			j++;
		}
		i++;
		j = 0;
	}
	printf("num: %d", num);

}
void func_7_4() {
	//print "*" 5 times, 3 times
	int i = 0, j = 0;
	while (i < 3) {
		j = 0;
		while (j < 5) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
void ex_7_3() {
	//print "*" increasing 
	int i = 0, j = 0;
	while (i < 5) {
		while (j < i+1 ) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		j = 0;
	}
}
void func_7_5(){
	//do ~ while
	int i = 0;
	do {
		printf("Hello moble \n");
		i++;
	} while (i < 10);
}
void ex_7_4() {
	//input number(int) to user and print that number's Gugudan
	int GU, MUL = 1, SUM = 0;
	printf("Enter the number (gugudan)");
	scanf("%d", &GU);
	while (MUL < 10)
	{
		SUM = GU * MUL;
		printf("%d x %d = %d \n", GU, MUL, SUM);
		MUL++;
	}
}
void ex_7_5() {
	// print Gugudan from 2 to 9
	int GU_NUM_1 = 2, GU_NUM_2 = 1;
	printf("Gugudan print \n\n");
	while (GU_NUM_1 < 10){
		while (GU_NUM_2 < 10) {
			printf("%d x %d = %d \n", GU_NUM_1, GU_NUM_2, GU_NUM_1 * GU_NUM_2);
			GU_NUM_2++;
		}
		GU_NUM_1++;
		GU_NUM_2 = 1;
		printf("\n");
	}
}
void func_7_6() {
	//while -> for
	for (int i = 0; i < 10; i++) {
		for (int j = 0;j < i+1;j++) {
			printf("*");
		}
		printf("\n");
	}
}
void ex_7_6() {
	//printf "*" increasing - 10*10
	int i = 0, j = 0;
	while (i < 10) {
		while (j < i+1) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		j = 0;
	}
}