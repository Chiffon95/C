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
		printf("스택이 꽉 차있습니다. 더 이상 데이터를 넣을 수 없습니다. \n");
		return 0;
	}

	g_nTop++;

	g_myStack[g_nTop] = nData;

	return 1;

}

int pop() {

	int nResult;

	if (isEmpty()) {
		printf("스택이 비어있습니다. \n");
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
//	printf("1. 데이터 넣기 \n2. 데이터 꺼내기\n3. 종료\n");
//
//	do {
//		scanf("%d", &nMenu);
//		
//		if (nMenu == 3) break;
//
//		if (nMenu == 1) {
//			printf("입력할 데이터 : ");
//			scanf("%d", &nData);
//			push(nData);
//		}
//		else if (nMenu == 2) {
//			if (!isEmpty())
//				printf("꺼낸 데이터 : %d \n", pop());
//			else
//				printf("스택이 비었습니다\n");
//		}
//	} while (1);
//}