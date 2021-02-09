#include <stdio.h>

void fun_19_1_SimpleAdder(int n1, int n2) {
	printf("%d + %d = %d", n1, n2, n1 + n2);
}
void func_19_1_ShowString(char* str) {
	printf("%s", str);
}
void func_19_1() {
	//function pointer
	char* str = "Function Pointer";
	int num1 = 10, num2 = 20;

	void(*fptr1)(int, int) = fun_19_1_SimpleAdder;
	void(*fptr2)(char*) = func_19_1_ShowString;

	//function pointer print
	fptr1(num1, num2);
	printf("\n");
	fptr2(str);
}
void func_19_2_fun1() {
	printf("Function 1!");
}
void func_19_2_fun2() {
	printf("Function 2!");
}
void func_19_2_fun3() {
	printf("Function 3!");
}
void func_19_2() {
	//void function pointer
	void(*fptr1)() = func_19_2_fun1;
	void(*fptr2)() = func_19_2_fun2;
	void(*fptr3)() = func_19_2_fun3;
	void(*fpArr[3])() = { func_19_2_fun1 ,func_19_2_fun2 ,func_19_2_fun3 };
	fptr1();
	printf("\n");
	fptr2();
	printf("\n");
	fptr3();
	printf("\n");

	int n = 0;
	printf("Choose a number - 1, 2, 3");
	scanf("%d", &n);

	fpArr[n - 1]();

}

//int main(int argc, char** argv) {
//	//main function Factor Transfer
//	int i = 0;
//
//	printf("sended string len : %d \n", argc);
//
//	for (i = 0;i < argc;i++)
//		printf("[%d] string : %s \n", i + 1, argv[i]);
//
//	return 0;
//}