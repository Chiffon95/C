#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func_11_1() {
	//array start
	double total;
	double val[5];

	val[0] = 1.01;
	val[1] = 2.02;
	val[2] = 3.03;
	val[3] = 4.04;
	val[4] = 5.05;

	total = val[0] + val[1] + val[2] + val[3] + val[4];
	printf("result : %lf \n", total / 5);
}
void func_11_2() {
	//check each array's byte and initialization
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("arr1 - %d \n", sizeof(arr1));
	printf("arr2 - %d \n", sizeof(arr2));
	printf("arr3 - %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(arr1[0]);
	ar2Len = sizeof(arr2) / sizeof(arr2[0]);
	ar3Len = sizeof(arr3) / sizeof(arr3[0]);
	
	for (i = 0;i < ar1Len;i++)
		printf("%d", arr1[i]);
	printf("\n");

	for (i = 0;i < ar2Len;i++)
		printf("%d", arr2[i]);
	printf("\n");

	for (i = 0;i < ar3Len;i++)
		printf("%d", arr3[i]);
	printf("\n");
}
void func_11_3() {
	//array - string, character, NULL
	char str1[5] = "Good";
	char str2[] = "morning";

	printf("%s \n", str1);
	printf("%s %s \n", str1, str2);
	printf("%c \n", str2[7]);
}
void func_11_4() {
	//print size of array,NULL(type of char and int), string)
	char str[] = "Good morning!";
	printf("str length : %d \n", sizeof(str));
	printf("str1 : %c \n", str[13]);
	printf("str2 : %d \n", str[13]);

	str[12] = '?';
	printf("change : %s \n", str);
}
void ex_11_1() {
	//1 to 100 - array initializtion
	int hun[100];
	for (int i = 0;i < sizeof(hun)/sizeof(hun[0]);i++) {
		hun[i] = i + 1;
		printf("%d ", hun[i]);
	}
}
void ex_11_2() {
	//1 to 100 (4 multiple) - array initializtion
	int hun[100];
	for (int i = 0;i < sizeof(hun) / sizeof(hun[0]);i++) {
		hun[i] = (i + 1) * 4;
		printf("%d ", hun[i]);
	}
}
void ex_11_3() {
	//input double score and print array values(add sum and ave)
	double dob[10];
	double Sum = 0, Ave = 0;
	int len = sizeof(dob) / sizeof(dob[0]);
	for (int i = 0;i < len -2; i++) {
		printf("[%d].", i+1);
		scanf("%lf", &dob[i]);
		Sum += dob[i];
		Ave = Sum / (len - 2);
	}
	dob[len - 2] = Sum; dob[len - 1] = Ave;
	for (int i = 0;i < len; i++) {
		printf("%.2f ", dob[i]);
	}
}
void func_11_5(){
	//change string
	int i;
	char ch;
	char str[6] = "Hello";

	printf("--Before--\n");
	printf("%s \n", str);

	for (i = 0;i < 6;i++)
		printf("%c -", str[i]);

	/*After*/
	for (i = 0;i < 3;i++) {
		ch = str[4 - i];
		str[4 - i] = str[i];
		str[i] = ch;
	}

	printf("\n\n--After--\n");
	printf("%s \n", str);
}
void func_11_6() {
	//input string and print string & char
	char str[50];
	int idx = 0;
	printf("input: ");
	scanf("%s", str);
	printf("input str: %s \n", str);

	printf("str: ");
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}
void func_11_7() {
	//relation about string & NULL
	char str[50] = "I like C programming";
	printf("string: %s \n", str);
	
	str[8] = '\0';
	printf("string: %s \n", str);
	str[6] = '\0';
	printf("string: %s \n", str);
	str[1] = '\0';
	printf("string: %s \n", str);
}
void func_11_8() {
	//chane string
	int i;
	char ch;
	char str[6] = "Hello";

	printf("--Before--\n");
	printf("%s \n", str);

	for (i = 0;i < 6;i++)
		printf("%c |", str[i]);

	/* change string*/
	for (i = 0; i < 3;i++) {
		ch = str[4 - i];
		str[4 - i] = str[i];
		str[i] = ch;
	}
	printf("\n\n--After--\n");
	printf("%s \n", str);
}
//practice
void pr_11_0(){
	//save in array
	int arr[100];
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < len;i++) {
		arr[i] = i+1;
	}
}
void pr_11_1(){
	//save in array and check array
	int arr[100];
	int len = sizeof(arr) / sizeof(arr[0]);
	int result = 0;

	for (int i = 0;i < len;i++) {
		arr[i] = (i + 1) * 4;
		result += arr[i];
		if (result >= 400) {
			printf("[%d]. 400, over = %d \n", i + 1, result);
			break;
		}
	}
}
void pr_11_3() {
	// no pointer pr_3 - odd or even?
	int arr[10];
	int odd[10] = { 0 };
	int even[10] = { 0 };

	int index_even = 0, index_odd = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("input 10 times\n");

	for (int i = 0; i < len; i++) {
		printf("[%d] ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < len; i++) {

		if (arr[i] % 2 == 0) {
			even[index_even++] = arr[i];
		}
		else {
			odd[index_odd++] = arr[i];
		}
	}

	printf("even : ");
	for (int i = 0; i < index_even; i++) {
		printf("%d, ", even[i]);
	}

	printf("\nodd : ");
	for (int i = 0; i < index_odd; i++) {
		printf("%d, ", odd[i]);
	}

}
void pr_11_3_ptr_2(int* ptr, int arr_len) {
	// use pointer pr_3 - odd or even?
	int e_arr[10] = { 0 }, o_arr[10] = { 0 };
	int e_cnt = 0, o_cnt = 0;
	int even_len = sizeof(e_arr) / sizeof(e_arr[0]);
	int odd_len = sizeof(o_arr) / sizeof(o_arr[0]);

	for (int i = 0;i < even_len;i++) {
		if (ptr[i] % 2 != 0) continue;
		e_arr[e_cnt++] = ptr[i];
	}
	for (int j = 0;j < odd_len;j++) {
		if (ptr[j] % 2 == 0) continue;
		o_arr[o_cnt++] = ptr[j];
	}
	printf("even : ");
	for (int k = 0; k < e_cnt;k++) {
		printf("%d, ", e_arr[k]);
	}
	printf("odd : ");
	for (int k = 0; k < o_cnt;k++) {
		printf("%d,", o_arr[k]);
	}
}
void pr_11_3_ptr_1() {
	// use pointer pr_3 - odd or even?
	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	int arr_num;

	printf("input 10 times. \n");

	for (int i = 0;i < len;i++) {
		printf("[%d] ", i + 1);
		scanf("%d", &arr_num);
		arr[i] = arr_num;
	}

	pr_11_3_ptr_2(arr, len);
}
void pr_11_5() {
	//string length check
	char str[100];

	printf("input no NULL. \n");
	scanf("%s", str);
	int index = 0;

	while (str[index] != '\0')
		index++;

	printf("String length : %d.", index);
}
void pr_11_7_1(void) {
	//not random
	unsigned int ran_1 = 1;
	char end_index;
	do {
		ran_1 = ran_1 * 2398252344598 + 12312339;
		ran_1 = ran_1 / 96432 % 12345;
		printf("print random number. (input 's' - end) \n");
		printf("%d \n", ran_1);
		scanf("%c", &end_index);
	} while (end_index != 's');
}
void pr_11_7_2(void) {
	// use library
	srand(time(NULL));
	int num;
	char ch;

	do {
		num = rand();
		num = num % 6 + 1;
		printf("%d \n", num);
		printf("press any key.(press 's' - over) \n ");
		scanf("%c", &ch);
	} while(ch != 's');
}
void pr_11_8(void) {
	//lotto number
	srand(time(NULL));
	int lotto[45];
	int lotto_index, temp;
	int len = sizeof(lotto) / sizeof(lotto[0]);
	for (int i = 0;i < len;i++) {
		lotto[i] = i + 1;
	}
	for (int i = 0;i < len;i++) {
		temp = lotto[0];
		lotto_index = rand() % 45;
		lotto[0] = lotto[lotto_index];
		lotto[lotto_index] = temp;
	}
	printf("lotto number : ");
	for (int i = 0;i < 6;i++) {
		printf("%d,", lotto[i]);
	}
}
void pr_11_9_1(void) {
	//no return - three digits without duplicate
	srand(time(NULL));
	int n_same[10];
	int index, temp;
	int len = sizeof(n_same) / sizeof(n_same[0]);
	
	for (int i = 0;i < len;i++) {
		n_same[i] = i;
	}
	for (int i = 0;i < len;i++) {
		index = rand() % 10;

		temp = n_same[0];
		n_same[0] = n_same[index];
		n_same[index] = temp;
	}
	if (n_same[0] == 0) {
		printf("%d%d%d", n_same[1], n_same[2], n_same[3]);
	}
	else {
		printf("%d%d%d", n_same[0], n_same[1], n_same[2]);
	}
}
int pr_11_9_2() {
	//return int - three digits without duplicate
	srand(time(NULL));
	int n_same[10];
	int index, temp, n_same_rlt;
	int len = sizeof(n_same) / sizeof(n_same[0]);

	for (int i = 0;i < len;i++) {
		n_same[i] = i;
	}
	for (int i = 0;i < len;i++) {
		index = rand() % 10;

		temp = n_same[0];
		n_same[0] = n_same[index];
		n_same[index] = temp;
	}
	if (n_same[0] == 0) {
		printf("%d%d%d", n_same[1], n_same[2], n_same[3]);
		n_same_rlt = n_same[1] * 100 + n_same[2] * 10 + n_same[3];
	}
	else {
		printf("%d%d%d", n_same[0], n_same[1], n_same[2]);
		n_same_rlt = n_same[0] * 100 + n_same[1] * 10 + n_same[2];
	}
	return n_same_rlt;
}