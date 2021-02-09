#include <stdio.h>

//0. 길이가 100인 int형 배열을 만들고 1부터 100까지의 정수로 초기화하시오
void func11_ex1() {
	int arr[100];

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		arr[i] = i + 1;
	}
}

//
//1. 길이가 100인 int형 배열을 만들고 4로 시작하는 4의 배수로 초기화하시오
//2. 1번에서 만든 배열 요소의 합이 처음으로 400을 넘는 것이 배열의 몇 번째 요소인지 출력하세요
void func11_ex2() {

	int arr[100];
	int sum = 0;
	int index_result = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		arr[i] = (i + 1) * 4;
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		sum += arr[i];
		if (sum > 400) {
			index_result = i;
			break;
		}
	}

	printf("%d번째 배열요소까지의 합이 최초로 400을 넘음", index_result +1);

}

//3. 길이가 10인 int 형 배열을 선언하고 정수를 10개 입력받으세요
//4. 길이가 10인 두 개의 배열을 선언하고 "3번문제" 배열에서 
// 각각 짝수인 요소, 홀수인 요소들만 복사한 후 출력하세요
void func11_ex3() {
	int arr[10];
	int odd[10] = { 0 };
	int even[10] = { 0 };

	int index_even = 0, index_odd = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("10개의 정수를 입력하세요\n");

	for (int i = 0; i < len; i++) {
		printf("[%d] ", i+1);
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

	printf("짝수 : ");
	for (int i = 0; i < index_even; i++) {
		printf("%d, ", even[i]);
	}

	printf("\n홀수 : ");
	for (int i = 0; i < index_odd; i++) {
		printf("%d, ", odd[i]);
	}

}

//5. 길이가 100인 char 형 배열에 문자열을 입력받고 그 문자열의 길이를 출력(library 사용하지 마세요)
//
//6. 길이가 10인 실수형 배열을 만들고, 사용자로부터 점수를 입력받아 초기화하세요.
//배열의 끝에서 두개의 요소에 각각 총점과 평균을 저장한 후 배열의 모든 요소를 출력하세요
void func11_6() {

	double arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < len - 2; i++) {
		scanf("%lf", &arr[i]);
	}

	//calculate
	arr[len - 2] = 0;
	for (int i = 0; i < len - 2; i++) {
		arr[len - 2] += arr[i];
	}

	arr[len - 1] = arr[len - 2] / (len - 2);
	
	for (int i = 0; i < len - 2; i++) {
		printf("%.2f, ", arr[i]);
	}
	printf("\n총점 : %.2f", arr[len - 2]);
	printf("\n평균 : %.2f", arr[len - 1]);
}

//7. C언어에서 난수를 발생하는 방법을 찾아보세요
