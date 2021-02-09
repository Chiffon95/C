#include<stdio.h>

//2021-01-26
void func_17_0() {
	//double pointer
	int num = 10;
	int* ptr = &num;
	int** dptr = &ptr;

	printf("%d %d %d \n", num, *ptr, **dptr);
	printf("%p %p %p \n", &num, ptr, *dptr);
}
void func_17_1() {
	//double pointer + pointer
	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p \n", ptr, *dptr);
	printf("%9g %9g %9g \n", num, **dptr, *ptr);
	ptr2 = *dptr;
	*ptr2 = 10.99;
	printf("%9g %9g \n", num, **dptr);
}