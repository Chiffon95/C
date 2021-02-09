#include <stdio.h>

void func_12_1() {
	//pointer start
	int a = 2005;
	int* pA = &a;

	printf("a   : %d\n", a);
	printf("pA  : %d\n", pA);

	printf("a   : %d\n", &a);
	printf("*pA : %d\n", *pA);

}
void func_12_2() {
	//pointer plus check
	int a = 2005;
	int *pA = &a;

	printf("%d\n", pA); 
	printf("%d\n", &a);

	(*pA)++;

	printf("a : %d\n", a);
	printf("*pA : %d\n", *pA);
}
void func_12_3(){
	//
	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;
	(*pnum) += 30;

	pnum = &num2;
	(*pnum) -= 30;

	printf("num : %d, num2 : %d \n", num1, num2);
}
void func_12_4() {
	//double pointer 1
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	printf("%d \n", num);
	(*ptr1)++;
	printf("%d \n", num);
	(*ptr2)++;
	printf("%d \n", num);
}
void func_12_5() {
	//double pointer 2
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1 -> %d \nptr2 -> %d", *ptr1, *ptr2);
}