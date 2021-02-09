#include<stdio.h>
void func_9_1_static(void);
int func_9_2_f(int n);
int ex_9_1_getMin(int getNum1, int getNum2);
int ex_9_1_getMax(int getNum1, int getNum2);
int ex_9_2_getMin(int getNum1, int getNum2, int getNum3);
int ex_9_2_getMax(int getNum1, int getNum2, int getNum3);

int ch_9(void) {
	////func_9_1_fct start
	//int i;
	//for (i = 0;i < 5;i++)
	//	func_9_1_static();
	//return 0;

	////func_9_2 start
	//int num;
	//printf("Ente the number (factorial). \n");
	//scanf("%d", &num);
	//int result = func_9_2_f(num);
	//printf("Result value : %d", result);

	////ex_9_1 start
	//int Num_Int_1, Num_Int_2;
	//printf("Enter two numbers. \n");
	//scanf("%d %d", &Num_Int_1, &Num_Int_2);
	//int Rlt_Min = ex_9_1_getMin(Num_Int_1, Num_Int_2);
	//int Rlt_Max = ex_9_1_getMax(Num_Int_1, Num_Int_2);
	//printf("Min number : %d \n", Rlt_Min);
	//printf("Max number : %d \n", Rlt_Max);

	////ex_9_2 start
	//int Num_Int_1, Num_Int_2, Num_Int_3;
	//printf("Enter three numbers. \n");
	//scanf("%d %d %d", &Num_Int_1, &Num_Int_2, &Num_Int_3);
	//int Min_Num = ex_9_2_getMin(Num_Int_1, Num_Int_2, Num_Int_3);
	//int Max_Num = ex_9_2_getMax(Num_Int_1, Num_Int_2, Num_Int_3);
	//printf("Min value : %d, Max value : %d", Min_Num, Max_Num);
}

void func_9_1_static() {
	//int val = 0;
	static int val = 0; //static once(static)
	val++;
	printf("%d", val);
}
int func_9_2_f(int n) {
	//factorial - Recursive function
	if (n == 0)
		return 1;
	else
		return n * func_9_2_f(n - 1);
}
int ex_9_1_getMin(int getNum1, int getNum2) {
	//Ente two numbers -> min value return
	if (getNum1 >= getNum2)
		return getNum2;
	else
		return getNum1;
}
int ex_9_1_getMax(int getNum1, int getNum2) {
	//Ente two numbers -> max value return
	if (getNum1 <= getNum2)
		return getNum2;
	else
		return getNum1;
}
int ex_9_2_getMin(int getNum1, int getNum2, int getNum3) {
	//Ente three numbers -> min value return
	int Min = (getNum1 < getNum2) ? getNum1 : getNum2;
	return Min = (Min < getNum3) ? Min : getNum3;
}
int ex_9_2_getMax(int getNum1, int getNum2, int getNum3) {
	//Ente three numbers -> max value return
	int Max = (getNum1 > getNum2) ? getNum1 : getNum2;
	return Max = (Max > getNum3) ? Max : getNum3;

}