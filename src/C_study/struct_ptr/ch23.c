#include <stdio.h>
#include <string.h>
#include <malloc.h>

//Dynamic assignment
void func_23_0() {
	//malloc start
	int* ptr1 = (int*)malloc(sizeof(int));
	int* ptr2 = (int*)malloc(sizeof(int) * 7);
	int i;

	*ptr1 = 20;

	for (i = 0;i < 7;i++)
		ptr2[i] = i + 1;

	printf("%d \n", *ptr1);
	for (i = 0;i < 7;i++)
		printf("%d ", ptr2[i]);

	free(ptr1);
	free(ptr2);
}

#define NUMNUM 10
void func_23_1() {
	//malloc
	int num[NUMNUM] = { 0 };
	int* pNum = (int*)malloc(sizeof(int) * NUMNUM);

	for (int i = 0;i < NUMNUM;i++) {
		num[i] = (i + 1) * 3;
		pNum[i] = (i + 1) * 3;
	}

	for (int i = 0;i < NUMNUM;i++) {
		printf("%3d \n", num[i]);
		printf("%3d \n\n", pNum[i]);
	}
}
void func_23_2() {
	int num = 0, index = 0, len = 2, i;
	int* pArr = (int*)malloc(sizeof(int) * len);

	do {
		scanf("%d", &num);
		if (num == -1) break;

		if (index > len - 1) {
			len += 3;
			pArr = (int*)realloc(pArr, sizeof(int) * len);
		}
		pArr[index++] = num;
	} while (1);

	printf("Array len : %d, array num : %d \n", len, index);

	for (i = 0;i < index;i++)
		printf("%d, ", pArr[i]);

	free(pArr);
	printf("\n");
}
void ex_23_0() {

	int Memsize, len = 0, cnt = 0;

	printf("Enter array memory len : ");
	scanf("%d", &Memsize);
	getchar();

	char* str = (char*)malloc(Memsize);

	printf("Enter the string : ");
	fgets(str, Memsize, stdin);
	len = strlen(str);
	str[len - 1] = '\0';

	for (int i = len;i >= 0;i--) {
		if (str[i] == ' ' || i == 0) {
			printf("%s ", str + i);
			str[i] = '\0';
		}
	}

	free(str);
}

#define BLOCK_SIZE 5
void ex_23_1() {
	char* ptr = (char*)malloc(BLOCK_SIZE);
	char ch = 0;
	int index = 0, count = 0, size = BLOCK_SIZE;

	do {
		ch = getchar();
		ptr[index] = ch;
		index++;
		if (index >= size) {
			size = index + BLOCK_SIZE;
			ptr = (char*)realloc(ptr, size);
			printf("realloc size %dȸ: %d\n", ++count, size);
		}
	} while (ch != '\n');
	ptr[--index] = '\0';

	printf("%s", ptr);
}