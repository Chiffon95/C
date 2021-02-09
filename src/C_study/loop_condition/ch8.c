#include <stdio.h>

void func_8_1() {
	//even or odd?
	int NUM = 0;
	printf("Enter number (int)");
	scanf("%d", &NUM);
	if (NUM % 2 == 0) {
		printf("Even number!!!");
	}
	else {
		printf("Odd number!!!");
	}
}
void ex_8_1() {
	//check the four fundamental arithmetic operations and print
	int NUM_INT = 0;
	double NUM_1, NUM_2, SUM = 0;
	printf("Enter the number from 1 to 4. \n");
	printf("1 : Plus, 2 : Minus, 3 : Multiplication, 4 : division \n");
	scanf("%d", &NUM_INT);
	
	while (NUM_INT > 4 || NUM_INT < 1) {
		printf("Try again :");
		scanf("%d", &NUM_INT);
	}
	printf("Enter 2 numbers (double or float) \n");
	scanf("%lf %lf", &NUM_1, &NUM_2);
	if (NUM_INT == 1) {
		SUM = NUM_1 + NUM_2;
	}
	else if (NUM_INT == 2) {
		SUM = NUM_1 - NUM_2;
	}
	else if (NUM_INT == 3) {
		SUM = NUM_1 * NUM_2;
	}
	else {
		SUM = NUM_1 / NUM_2;
	
	}
	printf("Result value : %.4f", SUM);
}
void ex_8_2() {
	//Enter from 1 to 5 -> print
	int NUM = 0, COUNT = 1;

	printf("Enter numbers from 1 to 5 (int) \n");
	do {
		scanf("%d", &NUM);
		if (NUM > 0 && NUM < 5) {
			printf("[%d] : %d \n", COUNT, NUM);
			COUNT++;
		}
		else{
			printf("Try again.\n");
		}
		NUM = 0;
	} while (COUNT < 11);
}
void func_8_2() {
	//Trinomial operator test
	int NUM, ABS;
	printf("Enter number (int) : ");
	scanf("%d", &NUM);

	ABS = NUM > 0 ? NUM : NUM * (-1);
	printf("Abs : %d \n", ABS);
}
void func_8_3(){
	//if over 100, print [%d] : %d
	int SUM = 0, NUM = 0;
	while (1){
		SUM += NUM;
		
		if (SUM > 100) {
			break;
		}
		NUM++;
	}
	printf("[%d] : %d", NUM, SUM);
}
void func_8_4() {
	// skip using continue
	for (int NUM = 0; NUM < 20; NUM++) {
		if (NUM % 3 == 0) {
			continue;
		}
		printf("%d \n", NUM);
	}
}
void func_8_5() {
	//choose oepration and print
	int NUM_INT = 0;
	double NUM_1, NUM_2, SUM = 0;
	printf("Enter the number from 1 to 4 \n");
	printf("1 : Plus, 2 : Minus, 3 : Multiplication, 4 : Division \n");
	scanf("%d", &NUM_INT);
	
	while (NUM_INT > 4 || NUM_INT < 1) {
		printf("Try again :");
		scanf("%d", &NUM_INT);
	}
	printf("Enter 2 numbers (double or float) \n");
	scanf("%lf %lf", &NUM_1, &NUM_2);
	switch (NUM_INT) {
	case 1:
		SUM = NUM_1 + NUM_2;
		break;
	case 2:
		SUM = NUM_1 - NUM_2;
		break;
	case 3:
		SUM = NUM_1 * NUM_2;
		break;
	default:
		SUM = NUM_1 / NUM_2;
		break;
	}
	printf("Result value : %.4f", SUM);
}
void ex_8_3() {
	//Enter score -> print grade (if)
	int SCR;
	printf("Enter your score -> ");
	scanf("%d", &SCR);
	if (SCR >= 90)
		printf("Grade : A");
	else if (SCR >= 80)
		printf("Grade : B");
	else if (SCR >= 70)
		printf("Grade : C");
	else if (SCR >= 60)
		printf("Grade : D");
	else
		printf("Grade : F");
}
void ex_8_4(){
	//Enter score and print grade (switch - case)
	int SCR; char GRA;
	printf("Enter your score -> ");
	scanf("%d", &SCR);
	SCR = SCR / 10;
	switch (SCR) {
	case 10: GRA = 'A'; break;
	case 9: GRA = 'A'; break;
	case 8: GRA = 'B'; break;
	case 7: GRA = 'C'; break;
	case 6: GRA = 'D'; break;
	default: GRA = 'F';break;
	}
	printf("Your grade : %c", GRA);
}