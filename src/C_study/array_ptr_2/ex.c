#include <stdio.h>

//>> > part 1
//1. 양의 정수인 2진수 00110111은 10진수로 얼마인가
//55
//2. 음의 정수인 2진수 11110010은 10진수로 얼마인가
//- 14
//3. 국어, 영어, 수학 점수(int)를 입력받아 총점과 평균을 출력하시오
void q_part1_3(){
	int kor, eng, math;

	printf("Enter the Korean, English, and math scores in order. \n");
	printf("Korean : ");
	scanf("%d", &kor);
	printf("English : ");
	scanf("%d", &eng);
	printf("math : ");
	scanf("%d", &math);

	int sum = kor + eng + math;
	printf("sum : %d, ave : %d", sum, sum / 3);
}

//4. double 타입의 상수 PI를 선언하고 3.14로 초기화 한 후,
//사용자로부터 반지름을 입력받아 원의 둘레와 넓이를 계산해 출력하시오
//(반지름은 정수만 입력가능하도록 구현)
void q_part_1_4() {
	const double PI = 3.14;
	double radius;
	printf("Enter radius : ");
	scanf("%lf", &radius);

	printf("Circumference : %.2lf, Width : %.2lf", 2 * PI * radius, PI * PI * radius);
}

//>> > part 2
//1. 다음과 같은 모양을 출력하도록 코드를 작성하세요(20점)
//* ****
//****
//***
//**
//*
void q_part_2_1() {
	for (int i = 5;i > 0;i--) {
		for (int j = 0;j < i;j++) {
			printf("*");
		}
		printf("\n");
	}
}

//2. 1부터 100까지의 정수 중 3의 배수를 모두 출력하세요. (30점)
//(continue를 사용할 것)
//
void q_part_2_2() {
	for (int i = 0;i < 100;i++) {
		if ((i+1) % 3 != 0) continue;
		printf("%d ", i + 1);
	}
}

//3. 점수를 전달받아 A~F까지 학점으로 반환하는 함수를 만드세요(30점)
char q_part_2_3(int c_score) {
	char grade;

	if (c_score < 0 || c_score > 100) {
		printf("Wrong score \n");
	}

	c_score /= 10;

	switch (c_score) {
	case 10:
	case 9:
		grade = 'A'; break;
	case 8:
		grade = 'B'; break;
	case 7:
		grade = 'C'; break;
	case 6:
		grade = 'D'; break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		grade = 'F'; break;
	default:
		grade = 'W'; break;
	}
	return grade;
}

//4. 사용자가 - 1을 입력할 때까지 입력받은 점수를 A~F까지의 학점으로 출력하세요.
//이 때 3번문제에서 만든 함수를 호출해서 구현합니다(20점)
void q_part_2_4() {
	int score;

	do {
		printf("Enter score : ");
		scanf("%d", &score);

		if (score == -1) break;

		score = q_part_2_3(score);
		if (score != 'W') {
			printf("Grade : %c \n", score);
		}
		else continue;
	} while (1);
}

//>> > part 3
//0. 길이가 100인 int형 배열을 만들고 1부터 100까지의 정수로 초기화하시오
void q_part_3_0() {
	int arr[100];
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0;i < len;i++) {
		arr[i] = i + 1;
	}
}

//1. 길이가 100인 int형 배열을 만들고 4로 시작하는 4의 배수로 초기화하시오.
void q_part_3_2(int* ptr, int arr_len);
void q_part_3_1() {
	int arr[100];
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len;i++) {
		arr[i] = (i + 1) * 4;
	}
	q_part_3_2(arr, len);
}

//2. 1번에서 만든 배열 요소의 합이 처음으로 400을 넘는 것이 배열의 몇 번째 요소인지 출력하세요
void q_part_3_2(int *ptr,int arr_len) {

	int sum = 0;

	for (int i = 0;i < arr_len;i++) {
		sum += i;
		if (sum >= 400) {
			printf("%d : %d", i + 1, sum);
			break;
		}
	}
}

//3. 길이가 10인 int 형 배열을 선언하고 정수를 10개 입력받으세요
void q_part_3_3() {
	int arr[10], arr_num;
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("Enter integer 10times \n");
	for (int i = 0;i < len;i++) {
		printf("%d : ", i + 1);
		scanf("%d", &arr_num);
	}
	void q_part_3_4(arr,len);
}

//4. 길이가 10인 두 개의 배열을 선언하고 "3번문제" 배열에서
//각각 짝수인 요소, 홀수인 요소들만 복사한 후 출력하세요
void q_part_3_4(int* ptr, int arr_len) {
	int odd[10];
	int even[10];
	int o_idx = 0, e_idx = 0;

	for (int i = 0;i < arr_len;i++) {
		if (ptr[i] % 2 != 0)
			odd[o_idx++] = ptr[i];
		else
			even[e_idx++] = ptr[i];
	}

	printf("odd number :");
	for (int i = 0;i < o_idx;i++) {
		printf("%d, ", odd[i]);
	}

	printf("\neven number :");
	for (int i = 0;i < e_idx;i++) {
		printf("%d, ", even[i]);
	}
}

//5. 길이가 100인 char 형 배열에 문자열을 입력받고 그 문자열의 길이를 출력(library 사용하지 마세요)
void q_part_3_5() {
	char str[100];
	int index = 0;

	printf("Enter string : ");
	scanf("%s", str);

	while (str[index] != '\0') {
		index++;
	}

	printf("lenght : %d", index);
}

//6. 길이가 10인 실수형 배열을 만들고, 사용자로부터 점수를 입력받아 초기화하세요.
//배열의 끝에서 두개의 요소에 각각 총점과 평균을 저장한 후 배열의 모든 요소를 출력하세요
void q_part_3_6() {
	double arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	double sum = 0, ave = 0;

	for (int i = 0; i < len - 2; i++) {
		printf("Enter number 8 times(double) : ");
		scanf("%lf", &arr[i]);
		sum += arr[i];
	}
	ave = sum / len - 2;
	arr[len - 2] = sum;
	arr[len - 1] = ave;

	printf("array : ");
	for (int i = 0;i < len; i++) {
		printf("%.2lf, ", arr[i]);
	}

}

//7. q를 누르기 전까지 계속해서 난수를 발생시켜 출력
//8. 로또 번호를 출력하세요
//9. 서로 중복되지 않는 숫자로 구성된 세자리 수를 만들어 반환하는 함수를 구현하세요

//2021-01-26
//1. 길이가 10인 배열을 만들고, 사용자로부터 입력받은 후
//배열 요소를 내림차순으로 정렬하시오(30)
void arrDown() {
	int arr[10], num = 0, temp = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	
	printf("Enter values 10 times : ");
	for (int i = 0;i < len;i++) {
		printf("[%d]", i + 1);
		scanf("%d", &num);
	}

	for (int i = 0;i < len - 1;i++) {
		for (int j = i + 1;j < len;j++) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
}
//2. 배열과 정수형 변수의 포인터를 전달받아 배열 모든 요소의 평균을
//변수형 포인터를 통해 반환하는 함수를 구현(30)
int getSum(int* arr, int arrLen, double* pAve) {
	int sum = 0;

	for (int i = 0; i < arrLen;i++) {
		sum += *(arr + i);
	}

	*pAve = (double)sum / arrLen;

	return sum;
}
//3. 정수형 배열의 주소와 길이를 전달받아
//가장 큰수와 작은 수를 반환하는 함수를 구현 (40)
void getMax_n_Min(int* arr, int arrLen, int *max,int *min) {
	int temp;

	for (int i = 0;i < arrLen - 1;i++) {
		if (*(arr + i + 1) > *(arr + i)) {
			*max = *(arr + i + 1);
		}
		if (*(arr + i + 1) < *(arr + i)) {
			*min = *(arr + i + 1);
		}
	}
}
//int main() {
//	int arr[10];
//	int len = sizeof(arr) / sizeof(arr[0]);
//	double ave = 0;
//
//	for (int i = 0; i < len;i++) {
//		arr[i] = i + 1;
//	}
//
//	int max = arr[0], min = arr[0];
//	int sum = getSum(arr, len, &ave);
//	getMax_n_Min(arr, len, &max, &min);
//
//	printf("max val : %d, min val : %d \n", max, min);
//	printf("val sum : %d, val ave : %.2lf", sum, ave);
//}