#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func_21_0_char_IO() {
	// getchar untill q
	char ch = 0;
	
	while (ch != 'q') {
		ch = getchar();
		putchar(ch);
	}
}
void func_21_0_Ctrl_Z() {
	//EOF = End Of File
	char ch = 0;

	while (ch != EOF) {
		ch = getchar();
		putchar(ch);
	}
	printf("프로그램 종료 \n");
}
void func_21_0_charWordChange() {
	//getchar & putchar
	char ch = 0;
	int gap = 'a' - 'A';

	printf("Ente 1 - end (Do not enter number) \n");

	while (ch != '1') {

		ch = getchar();

		if (ch >= 'a' && ch <= 'z')
			ch -= gap;
		else if (ch >= 'A' && ch <= 'Z')
			ch += gap;

		putchar(ch);
	}
}
void func_21_1_puts_fputs() {
	//print using fputs & puts
	fputs("Print by fputs function, ", stdout);
	fputs("l'm very hungry",stdout);

	fputs("\n", stdout);

	puts("Print by puts function, ");
	puts("I'm very hungry");
}
void func_21_1_fputs() {
	//print using fputs and enter using fgets
	char str[10];

	fputs("Enter string : ", stdout);
	fgets(str, sizeof(str), stdin);

	fputs("String print : ", stdout);
	fputs(str, stdout);
}
void func_21_2_fflush() {
	//fflush check
	char perID[7];
	char name[10];

	fputs("Enter first digit of resident registration number : ", stdout);
	fgets(perID, sizeof(perID), stdin);

	fflush(stdin);

	fputs("Enter name : ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("First digit of resident registration number ; %s\n", perID);
	printf("name : %s\n", name);
}
void func_21_3_strlen() {
	//strlen check
	char str[100];

	while (1) {
		fgets(str, sizeof(str), stdin);
		printf("String len : %d \n", strlen(str));
	}
}
void func_21_3() {
	//fgets
	char str[100];

	while (1) {
		fgets(str, sizeof(str), stdin);
		printf("String len : %d \n", strlen(str));
	}
	system("pause");
}
void func_21_5_strcpy() {
	//error & no error & trash value
	char str1[15];
	char str2[30];
	char str3[15];
	char* pStr = "hello world";

	//no error
	strcpy(str1, pStr);
	printf("%s\n", str1);

	//error - end
	strcpy(str2, "abcdefghijklmn");
	str2[14] = '\0';
	printf("%s\n", str2);
	
	//trash value
	strncpy(str3, pStr, 4);
	str3[4] = '\0';
	printf("%s\n", str3);

	return 0;
}
void func_21_6_strcat() {
	//strcat!
	char str1[40] = "Your favorite language is ";
	char str2[10];

	fputs("What is your favorite computer lanaguage? : ", stdout);
	fgets(str2, sizeof(str2), stdin);

	strcat(str1, str2);
	printf("Entered string : %s\n", str1);

	return 0;
}
void func_21_7_strcat() {
	//strcat check
	char str1[30] = "Good";
	char str2[30] = "morning";

	strcat(str1, str2);
	printf("%s\n", str1);

	system("pause");
}
void func_21_7_strncat() {
	//strncat check
	char str1[30] = "Good";
	char str2[30] = "morning";

	strncat(str1, str2, 3);
	printf("%s\n", str1);

	system("pause");

}
void func_21_8_strcamp() {
	//strcmp - string compare
	char* str1 = "ABC";
	char* str2 = "ABD";

	int result;
	result = strcmp(str1, str2);

	if (result > 0)
		puts("str1 > str2");
	else if (result < 0)
		puts("str2 > str1");
	else
		puts("str1 == str2");
}
void func_21_9_Captical() {
	//atoi
	int atoi(char* ptr);
	char str1[30];
	char str2[30];
	char str3[30];
	int num1, num2, num3;
	int gap = 'a' - 'A';

	fputs("Enter string : ", stdout);
	fgets(str1, sizeof(str1), stdin);

	num1 = atoi(str1);

	if (num1 >= 'a' && num1 <= 'z')
		num1 -= gap;
	else if (num1 >= 'A' && num1 <= 'Z')
		num1 += gap;
}

//int main() {
//	func_21_9_Captical();
//
//	return 0;
//
//}