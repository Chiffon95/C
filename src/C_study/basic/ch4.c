#include <stdio.h>

void func_4_1() {
	//decimal number, hexadecimal, octal, ASCII code
	int a = 10;
	int b = 0xa;
	int c = 012;
	int d = 65;

	printf("%d, %d %d \n", a, b, c);
	printf("%d, %c", d, d);
}
void func_4_2() {
	//AND operation result
	int a = 15;
	int b = 20;
	int c = a & b;

	printf("AND Operation result :%d \n",c);
}
void func_4_3() {
	//OR operation result
	int a = 15;
	int b = 20;
	int c = a | b;

	printf("OR Operation result :%d \n", c);
}
void func_4_4() {
	//XOR operation result
	int a = 15;
	int b = 20;
	int c = a^b;

	printf("XOR Operation result :%d \n", c);
}
void func_4_5() {
	//NOT operation result
	int a = 15;
	int b = ~a;

	printf("NOT Operation result :%d \n", b);
}
void func_4_6() {
	//<<, >> operation result
	int a = 15;
	int b = a<<2;

	printf("<<2 Operation result : %d \n", b);
	b = a << 3;
	printf("<<3 Operation result : %d \n", b);
	b = a << 4;
	printf("<<4 Operation result : %d \n", b);

	a = 15;
	b = a >> 1;
	printf(">>1 Operation result : %d \n", b);
	b = a >> 2;
	printf(">>2 Operation result : %d \n", b);
	b = a >> 3;
	printf(">>3 Operation result : %d \n", b);
	b = a >> 4;
	printf(">>4 Operation result : %d \n", b);
}