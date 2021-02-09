#include <stdio.h>

void swap(int* p1, int* p2) {
	//swap pointer
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void swapDptr(int** p1, int** p2) {
	//double pointer swap
	int* temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}
void CallByReference() {
	//swap pointer -> Call-by-value or Call-by-reference ? -> Call-by-reference
	int a = 10;
	int b = 30;
	//int *pA = &a;
	//int *pB = &b;

	printf("Before : %d, %d \n", a, b);
	printf("Before : %p, %p \n", &a, &b);

	swap(&a, &b);
	//swap_1(pA, pB);

	printf("After : %d, %d \n", a, b);
	printf("After : %p, %p \n", &a, &b);
}
void CallByValue() {
	//swap pointer -> Call-by-value or Call-by-reference ? -> Call-by-value
	int a = 10;
	int b = 30;
	int* pA = &a;
	int* pB = &b;

	printf("Before : %d, %d \n", a, b);
	printf("Before : %p, %p \n", pA, pB);

	//swap_2(&a, &b);
	swap(pA, pB);

	printf("After : %d, %d \n", a, b);
	printf("After : %p, %p \n", pA, pB);
}
void DptrCallByReference() {
	//double pointer swap - swapDptr
	int a = 10, b = 20;
	int* pA = &a, * pB = &b;

	printf("%d %d", *pA, *pB);
	swapDptr(&pA, &pB);
	printf("%d %d", *pA, *pB);
}