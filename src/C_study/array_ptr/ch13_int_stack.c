#include<stdio.h>

const int STACK_SIZE = 10;

int g_myStack[10];

int g_nTop = -1;

int isEmpty() {

	if (g_nTop > -1) {
		return 0;
	}

	return 1;
}

int push(int nData) {

	if (g_nTop >= STACK_SIZE - 1) {
		printf("������ �� ���ֽ��ϴ�. �� �̻� �����͸� ���� �� �����ϴ�. \n");
		return 0;
	}

	g_nTop++;

	g_myStack[g_nTop] = nData;

	return 1;

}

int pop() {

	int nResult;

	if (isEmpty()) {
		printf("������ ����ֽ��ϴ�. \n");
		return 0xff;
	}

	nResult =  g_myStack[g_nTop--];
	return nResult;
}

//int main() {
//
//	int nData;
//	int nMenu;
//
//	printf("1. ������ �ֱ� \n2. ������ ������\n3. ����\n");
//
//	do {
//		scanf("%d", &nMenu);
//		
//		if (nMenu == 3) break;
//
//		if (nMenu == 1) {
//			printf("�Է��� ������ : ");
//			scanf("%d", &nData);
//			push(nData);
//		}
//		else if (nMenu == 2) {
//			if (!isEmpty())
//				printf("���� ������ : %d \n", pop());
//			else
//				printf("������ ������ϴ�\n");
//		}
//	} while (1);
//}