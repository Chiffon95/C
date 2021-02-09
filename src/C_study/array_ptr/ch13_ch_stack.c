#include<stdio.h>

#define STACK_SIZE_ch 100
char g_myStack_ch[10];
int g_nTop_ch = -1;

//char stack
void no_stack() {
	char str[100];
	int index;
	int len = sizeof(str) / sizeof(str[0]);

	printf("input string. \n");
	scanf("%s", str);

	for (int i = len;i > 0;i--) {
		if (str[i] == '\0') continue;
		else printf("%s", str[i]);
	}

	//   char str[100];
	//
	//   scanf("%s", str);
	//
	//   int index = 0;
	//   while (str[index] != '\0') {
	//      index++;
	//   }
	//
	//   while (index > 0) {
	//      printf("%c", str[index - 1]);
	//      index--;
	//   }
}
int isEmpty_ch() {

	if (g_nTop_ch > -1) {
		return 0;
	}

	return 1;
}
int push_ch(char chData) {

	if (g_nTop_ch >= STACK_SIZE_ch - 1) {
		printf("Full stack!. \n");
		return 0;
	}

	g_nTop_ch++;

	g_myStack_ch[g_nTop_ch] = chData;

	return 1;

}
char pop_ch() {

	char chResult;

	if (isEmpty_ch()) {
		printf("Empty stack!. \n");
		return 0xff;
	}

	chResult = g_myStack_ch[g_nTop_ch--];
	return chResult;
}

//int main() {
//
//	char str[STACK_SIZE_ch];
//	int nMenu;
//
//	printf("Print input string reverse (end - 'end')\n");
//
//	do {
//		scanf("%s", str);
//
//		if (str[0] == 'e' && str[1] == 'n'&& str[2] == 'd') break;
//
//		int index = 0;
//		while (str[index] != '\0' || index > STACK_SIZE_ch - 1) {
//			push_ch(str[index]);
//			index++;
//		}
//
//		printf("Print reverse : ");
//
//		while (!isEmpty_ch()) {
//			printf("%c", pop_ch());
//		}
//		printf("\n");
//	} while (1);
//	return 0;
//}