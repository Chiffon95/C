#include <stdio.h>

void func_13_1() {
	//pointer array 1 - address
	int a[5] = { 0,1,2,3,4 };

	printf("a[0] : %d \na[1] : %d \n", a[0], a[1]);
	printf("a[0] address : %d \na[1] address : %d \n", &a[0], &a[1]);
	printf("array address : %d \n", a);

	printf("a[0] : %d \na[1] : %d \n", a[0], a[1]);
	printf("a[0] address : %p \na[1] address : %p \n", &a[0], &a[1]);
	printf("array address : %p \n", a);
}
void func_13_2(){
	//pointer array 2
	int arr[3] = { 0,1,2 };
	int* ptr;

	ptr = arr;

	printf("%d, %d, %d \n", ptr[0], ptr[1], ptr[2]);
}
void func_13_3() {
	//pointer array 3 - pointer operation of each type 
	int* ptr1 = 0;
	char* ptr2 = 0;
	double* ptr3 = 0;

	printf("address 1 : %d, address 2 : %d, address 3 : %d \n", ptr1++, ptr2++, ptr3++);
	printf("address 1 : %d, address 2 : %d, address 3 : %d", ptr1, ptr2, ptr3);

}
void func_13_4() {
	int arr[3] = { 1,2,3 };
	int* ptr = arr; // ptr == &arr[0]

	printf("saved address in ptr : %p \n", ptr);

	printf("%d \n", *(++ptr));
	printf("saved address in ptr : %p \n", ptr);
	printf("%d \n", *(ptr + 1));

	printf("saved address in ptr : %p \n", ptr);
}
void ex_13_1() {
	//array name
	int arr[3] = { 0,1,2 };
	printf("array name ; %p \n", arr);
	printf("1st ; %p \n", &arr[0]);
	printf("2nd ; %p \n", &arr[1]);
	printf("3rd ; %p \n", &arr[2]);
}
void ex_13_2() {
	//use array's name like pointer
	int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1,2.2,3.3 };

	printf("%d	%g \n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d	%g \n", arr1[0], arr2[0]);
}
void ex_13_3() {
	//use pointer like array's name
	int arr[3] = { 15,25,35 };
	int* ptr = &arr[0];//int *ptr=arr;

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
}
void ex_13_4() {
	int* ptr1 = 0x0010;
	double* ptr2 = 0x0010;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2);
	printf("%p %p \n", ptr2 + 1, ptr2 + 2);

	printf("%p %p \n", ptr1, ptr2);
	ptr1++;
	ptr2++;
	printf("%p %p \n", ptr1, ptr2);
}
void ex_13_5() {
	int arr[5] = { 1,2,3,4,5 };
	int* pArr = arr;

	printf("%d \n", *pArr);

	printf("%d \n", *(++pArr));
	printf("%d \n", *(++pArr));

	printf("%d \n", *pArr);
	printf("%d \n", *(pArr + 1));
	printf("%d \n", *(pArr + 2));
}
void ex_13_6() {
	//printf arr[%d++], printf arr[%d+1]
	int arr[3] = { 11,22,33 };
	int* ptr = arr;//int * ptr == &arr[0]

	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");
}
void ex_13_7() {
	//load address's number
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1,&num2,&num3 };

	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);
}
void ex_13_8() {
	//Simple String Array
	char* strArr[3] = { "Simple","String","Array" };

	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);
}
void func_13_5() {
	char str1[5] = "abcd";
	char* str2 = "ABCD";

	printf("%s \n", str1);
	printf("%s \n", str2);

	str1[0] = 'x';
	//str2[0] = 'x'; // Error

	printf("%s \n", str1);
	printf("%s \n", str2);
}
void func_13_6() {
	int a = 10, b = 20, c = 30;
	int* arr[3] = { &a,&b,&c };

	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);
}
void func_13_7() {
	char* arr[3] = {
		"Fervaent-lecture",
		"TCP/IP",
		"Socket Progamming" };
	printf("%s \n", arr[0]);
	printf("%s \n", arr[1]);
	printf("%s \n", arr[2]);
}
void ex_13_9() {
	char str[100];
	char max;
	int index = 0;
	printf("Input string. \n");
	scanf("%s", str);
	
	max = str[index];
	do {
		index++;
		if (str[index] == '\0') break;

		//max = (max > str[index]) ? max : str[index];

		if (max < str[index]) {
			max = str[index];
		}
	} while (1);
	printf("Biggest number ASCII CODE : %d", max);
}