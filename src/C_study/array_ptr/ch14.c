#include <stdio.h>
#include <string.h>

void func_14_0_showArr_int(int* ptr, int arrLen) {
	//print arr - pointer
	for (int i = 0;i < arrLen; i++) {
		printf("%d, ", *(ptr + i));
	}
}
void func_14_0_arrReverse() {
	//Reverse array
	int arr[10], temp;
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0;i < len;i++) {
		arr[i] = i + 1;
	}

	func_14_0_showArr_int(arr, len);

	printf("\n");

	for (int i = 0;i < len / 2;i++) {
		temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}

	func_14_0_showArr_int(arr, len);
}
int func_14_1_fct_2(int a) {
	//plus value
	a++;
	return a;
}
void func_14_1_fct_3(int *ptr) {
	//plus value using pointer
	(*ptr)++;
}
void func_14_1() {
	//1. call by value 2. call by reference
	int val = 10;
	printf("val:%d", val);

	func_14_1_fct_2(val);
	printf("After func_14_1_fct_2(val) - val : %d \n", val);

	func_14_1_fct_3(&val);
	printf("After func_14_1_fct_3(val) - val : %d \n", val);
}
void func_14_2_square(int* ptr) {
	//square operation
	*ptr = (*ptr) * (*ptr);
}
void func_14_2() {
	//show operation
	int val = 10;

	printf("Before func_14_2_square val : %d \n", val);

	func_14_2_square(&val);

	printf("After func_14_2_square val : %d \n", val);
}
int func_14_3_getSum(int* ptr, int arrLen, double *ave) {
	
	int sum = 0;

	for (int i = 0;i < arrLen;i ++ ) {
		sum += *(ptr + i);
	}
	*ave = (double)sum/arrLen;
	return sum;
}
void func_14_3() {

	int arr[5] = { 1,5,7,8,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	double ave = 0;

	int total = func_14_3_getSum(arr, len, &ave);
	

	printf("Total : %d, %f", total, ave);
}
void func_14_4_getCapital(int* str, int idx_len) {
	
	int gap = 'a' - 'A';
	int i = 0;
	while (str[i] != '\0') {
		str[i] = str[i] - gap;
		i++;
	}
}
void func_14_4_showArr_char(char* ptr, int idx_len) {
	//print arr - pointer
	for (int i = 0;i < idx_len; i++) {
		printf("%c, ", *(ptr + i));
	}
}
void func_14_4() {
	char str[100] = "hello";
	int index = 0;

	while (str[index] != '\0') {
		index++;
	}

	func_14_4_getCapital(str, index);

	func_14_4_showArr_char(str, index);
}
void func_14_5_callByValue(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	printf("call by value -> a : %d \n", a);
	printf("call by value -> b : %d \n", b);
}
void func_14_5() {
	int val1 = 10;
	int val2 = 20;

	printf("Before val1 : %d \n", val1);
	printf("Before val2 : %d \n", val2);

	func_14_5_callByValue(val1, val2);

	printf("After val1 : %d \n", val1);
	printf("After val2 : %d \n", val2);
}
void func_14_6_callByReferenece(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void func_14_6() {
	int val1 = 10;
	int val2 = 20;

	printf("Before val1 : %d \n", val1);
	printf("Before val2 : %d \n", val2);
	func_14_6_callByReferenece(&val1, &val2);

	printf("After val1 : %d \n", val1);
	printf("After val2 : %d \n", val2);

}
void func_14_7(){
	////variable number constant hydration
	//int a = 10;
	//const int* p = &a;

	////*p = 30; //Error
	//a = 30;

	////pointer constant hydration
	//int a = 10;
	//int b = 20;
	//int* const p = &a;
	////p = &b;; //Error
	//8p = 30;
}

//1. ���̰� 10�� ������ �迭�� 1���� 10���� �ʱ�ȭ�� ��, 
//   �迭�� ���� �հ� �ڸ� ����Ű�� �����ͺ����� �̿���,
//   10���� 1�� ����ǵ��� �����ϼ���
void getReverse(int* first_num, int* last_num, int arrLen) {
	for (int i = 0;i < arrLen / 2;i++) {
		int temp = *first_num;
		*first_num = *last_num;
		*last_num = temp;
		first_num++; last_num--;
	}
}
void Array_1() {
	int arr[100];
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len;i++) {
		arr[i] = i + 1;
	}
	getReverse(arr, arr + len - 1, len);


	printf("Reversed array : ");
	for (int i = 0; i < len;i++) {
		printf("%3d", arr[i]);
	}
	
}
//2. 1���� �迭�� ���޹޾� �迭�� ��Ҹ� ��� ����ϴ� �Լ��� ����
void arrPrint(int* ptr, int arrLen) {

	printf("Array : ");
	for (int i = 0;i < arrLen;i++) {
		printf("%3d, ", *(ptr + i));
	}
}
void Array_2() {
	int arr[100];
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len;i++) {
		arr[i] = i + 1;
	}

	arrPrint(arr, len);
}
//3. ������ �迭�� ������ ��ȯ�ϴ� �Լ��� ����, �������ڴ� �迭�� ���� �ּ�
int arrSum(int* pArr, int arrLen) {

	int sum = 0;
	for (int i = 0;i < arrLen;i++) {
		sum += *(pArr + i);
	}

	return sum;
}
void Array_3() {
	int arr[100];
	int len = sizeof(arr) / sizeof(arr[0]);
	int sum;

	for (int i = 0; i < len;i++) {
		arr[i] = i + 1;
	}
	sum = arrSum(arr, len);

	printf("Array Sum : %d ", sum);
}
//4. �迭�� ������ ������ �����͸� ���޹޾� �迭 ��� ����� ����� ������ �����͸� ���� ��ȯ�ϴ� �Լ��� ����
int arrAve(int* pArr, int arrLen, double *pAve) {
	
	int arrSum = 0;

	for (int i = 0;i < arrLen;i++) {
		arrSum += *(pArr + i);
	}
	*pAve = (double)arrSum / arrLen;

	return arrSum;
}
void Array_4() {
	int arr[100];
	int len = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;
	double ave = 0;

	for (int i = 0; i < len;i++) {
		arr[i] = i + 1;
	}
	sum = arrSum(arr, len, &ave);

	printf("Array Sum : %d ", sum);
	printf("Array Average : %lf ", ave);
}
//5. ���� �ܾ ���޹��� �� �ҹ��ڴ� �빮�ڷ� �빮�ڴ� �ҹ��ڷ� �ٲ��ִ� �Լ� ����, 
//   �Լ� ȣ�� �� �迭�� �ܾ �빮�ڷ� �ٲ��� ��
void shift(char* str, int len)
{
	int gap = 'a' - 'A';

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - gap;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + gap;
		}
		else {
			printf("��� �ƴմϴ�.");
			break;
		}

	}
}
void func13() {

	char word[100];

	scanf("%s", word);

	shift(word, strlen(word));

	printf("%s", word);

}
//6. 2�� ���� ���� �Է¹޾� �� ���� ���� �ٲ��ִ� �Լ��� ����(call - by - reference�� ����)
void inChange(int *pA, int *pB) {
	int temp = *pA;
	*pA = *pB;
	*pB = temp;
}
void test() {
	int a = 10;
	int b = 30;

	inChange(&a, &b);

	printf("%d, %d", a, b);

	return 0;
}

int func14_ex2(int* ptr, int len);

void func14_ex0() {
	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	int temp;

	for (int i = 0; i < len; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < len / 2; i++) {
		temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;

	}
}

void func14_ex1() {
	int arr[10];
	int* ptr1, * ptr2;
	int len = sizeof(arr) / sizeof(arr[0]);
	int temp;

	for (int i = 0; i < len; i++) {
		arr[i] = i + 1;
	}

	ptr1 = arr;
	ptr2 = arr + len - 1;

	for (int i = 0; i < len / 2; i++) {
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++; ptr2--;
	}

}

//2. 1���� �迭�� ���޹޾� �迭�� ��Ҹ� ��� ����ϴ� �Լ��� ����
int func14_ex2(int* ptr, int len) {

	for (int i = 0; i < len; i++) {
		printf("%d, ", *(ptr + i));
	}
}

//3. ������ �迭�� ������ ��ȯ�ϴ� �Լ��� ����, �������ڴ� �迭�� ���� �ּ�
int func14_ex3(int* ptr, int len) {

	int sum = 0;

	for (int i = 0; i < len; i++) {
		sum += *(ptr + i);
	}

	return sum;

}

//4. �迭�� ������ ������ �����͸� ���޹޾� 
//   �迭 ��� ����� ����� ������ �����͸� ���� ��ȯ�ϴ� �Լ��� ����
void func14_ex4(int* ptr, int len, double* pAvg) {

	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum += ptr[i];
	}

	*pAvg = (double)sum / len;
}

//5. ���� �ܾ ���޹��� �� �ҹ��ڴ� �빮�ڷ� �빮�ڴ� �ҹ��ڷ� �ٲ��ִ� �Լ� ����, 
//   �Լ� ȣ�� �� �迭�� �ܾ �빮�ڷ� �ٲ��� ��
void wordCapital(char *str, int len) {

	if (str[len] != '\0') {
		printf("Error");
		return;
	}

	int gap = 'a' - 'A';
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += gap;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= gap;

		}
		else {
			printf("%c", str[i]);
		}
		i++;
	}
}

//6. 2�� ���� ���� �Է¹޾� �� ���� ���� �ٲ��ִ� �Լ��� ����(call - by - reference�� ����)
void func14_ex6_abChange(int* pA, int* pB) {

	int temp = 0;

	temp = *pA;
	*pA = *pB;
	*pB = temp;

}
int func14_ex6() {

	int a = 10;
	int b = 20;

	func14_ex6_abChange(&a, &b);

	return 0;
}