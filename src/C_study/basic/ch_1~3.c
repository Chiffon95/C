#include <stdio.h>

void func_1(){
	//Hello World!
	printf("Hello, Wordl!\n");
	printf("%d-%d-%d \n", 2021, 1, 18);
}
void func_2(){
	//int value print
	int a, b;
	int c = 30, d = 40;

	a = 10;
	b = 20;

	printf("%d %d \n", a, b);
	printf("%d %d \n", c, d);
}
void func_3() {
	//saved int value check
	int result;
	result = 3 + 4;

	printf("Result (plus) : %d \n", result);
	printf("%d + %d = %d\n", 3, 4, result);
	printf("Result : %d \n", result);
}
void func_4() {
	//comparison "calculating after plus or minus", 'plus or minus after calculating"
	int a = 10;
	int b = 10;
	printf("a ; %d \n", a++);
	printf("b ; %d \n", ++b);

	a = 10;
	b = 10;
	printf("a ; %d \n", a--);
	printf("b ; %d \n", --b);
}
void func_5() {
	//the four fundamental arithmetic operations
	int num1 = 9, num2 = 2;

	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d x %d = %d \n", num1, num2, num1 * num2);
	printf("%d ¡À %d share = %d \n", num1, num2, (num1 / num2));
	printf("%d ¡À %d rest = %d \n", num1, num2, (num1 % num2));
}
void func_6() {
	//check plus and minus
	int num1 = 12, num2 = 12;

	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2);
	printf("num2: %d \n", num2);
}
void func_7() {
	//check minus
	int num1 = 10, num2 = (num1--) + 2;

	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);
}
void func_8() {
	// Comparison Operations
	int num1 = 10, num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2 > 12);
	result3 = (!num1);

	printf("result1 : %d \n", result1);
	printf("result2 : %d \n", result2);
	printf("result3 : %d \n", result3);
}
void func_9() {
	// input value
	int num;

	scanf("%d", &num);
	printf("Input : %d", num);
}
void func_10() {
	// input values and check
	int n1, n2, n3;

	scanf("%d %d %d", &n1, &n2, &n3);
	printf("Input : %d %d %d", n1, n2, n3);
}
void ex_1() {
	//input kor,eng,math and print values and average value (int)
	int kor, math, eng, ave;

	printf("Enter score Korean, English, Math \n");
	printf("Korean = ");
	scanf("%d", &kor);
	printf("English = ");
	scanf("%d", &eng);
	printf("Math = ");
	scanf("%d", &math);
	printf("Score : %d, %d, %d \n", kor, eng, math);

	ave = (kor + eng + math) / 3;
	printf("Score average : %d\n", ave);
}