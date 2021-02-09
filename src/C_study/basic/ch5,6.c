#include <stdio.h>

/*type conversion*/
void func_5_1() {
	//sizeof VAL printf
	int VAL = 10;
	printf("%d", sizeof VAL);
}
void func_6_1() {
	//self type conversion
	int NUM1 = 3, NUM2 = 4;
	double divResult;

	divResult = (double)NUM1 / NUM2;
	printf("Division result(type conversion front) : %f \n", divResult);
	divResult = NUM1 / (double)NUM2;
	printf("Division result(type conversion back) : %f \n", divResult);
	divResult = NUM1 / NUM2;
	printf("Division result : %f \n", divResult);
}
void ex_5_1() {
	//input kor,eng,math and print values and average value (double)
	int KOR, MATH, ENG;
	double AVE;

	printf("Enter Korean, English, Math score. \n");
	printf("Korean = ");
	scanf("%d", &KOR);
	printf("English = ");
	scanf("%d", &ENG);
	printf("Math = ");
	scanf("%d", &MATH);
	printf("Entered score : %d - %d - %d \n", KOR, ENG, MATH);

	AVE = (KOR + ENG + MATH) / (double)3;
	printf("Korean, English, Mate score : %.2f \n", AVE);
}