#include <stdio.h>

//0. ���̰� 100�� int�� �迭�� ����� 1���� 100������ ������ �ʱ�ȭ�Ͻÿ�
void func11_ex1() {
	int arr[100];

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		arr[i] = i + 1;
	}
}

//
//1. ���̰� 100�� int�� �迭�� ����� 4�� �����ϴ� 4�� ����� �ʱ�ȭ�Ͻÿ�
//2. 1������ ���� �迭 ����� ���� ó������ 400�� �Ѵ� ���� �迭�� �� ��° ������� ����ϼ���
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

	printf("%d��° �迭��ұ����� ���� ���ʷ� 400�� ����", index_result +1);

}

//3. ���̰� 10�� int �� �迭�� �����ϰ� ������ 10�� �Է¹�������
//4. ���̰� 10�� �� ���� �迭�� �����ϰ� "3������" �迭���� 
// ���� ¦���� ���, Ȧ���� ��ҵ鸸 ������ �� ����ϼ���
void func11_ex3() {
	int arr[10];
	int odd[10] = { 0 };
	int even[10] = { 0 };

	int index_even = 0, index_odd = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("10���� ������ �Է��ϼ���\n");

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

	printf("¦�� : ");
	for (int i = 0; i < index_even; i++) {
		printf("%d, ", even[i]);
	}

	printf("\nȦ�� : ");
	for (int i = 0; i < index_odd; i++) {
		printf("%d, ", odd[i]);
	}

}

//5. ���̰� 100�� char �� �迭�� ���ڿ��� �Է¹ް� �� ���ڿ��� ���̸� ���(library ������� ������)
//
//6. ���̰� 10�� �Ǽ��� �迭�� �����, ����ڷκ��� ������ �Է¹޾� �ʱ�ȭ�ϼ���.
//�迭�� ������ �ΰ��� ��ҿ� ���� ������ ����� ������ �� �迭�� ��� ��Ҹ� ����ϼ���
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
	printf("\n���� : %.2f", arr[len - 2]);
	printf("\n��� : %.2f", arr[len - 1]);
}

//7. C���� ������ �߻��ϴ� ����� ã�ƺ�����
