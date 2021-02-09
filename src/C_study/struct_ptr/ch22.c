#include <stdio.h>

struct func_22_0_person {
	char name[20];
	char phone[20];
};
void func_22_0() {
	struct func_22_0_person man = { "Thomas","354-00xx" };
	struct func_22_0_person* pMan;
	pMan = &man;

	//struct
	puts(man.name);
	puts(man.phone);

	//struct pointer 1
	puts((*pMan).name);
	puts((*pMan).phone);

	//struct pointer 2
	puts(pMan->name);
	puts(pMan->phone);
}
struct func_22_1_perlnfo {
	char addr[30];
	char tel[20];
};
struct func_22_1_person {
	char name[20];
	char pID[20];
	struct func_22_1_perlnfo* infor;
};
void func_22_1() {
	struct func_22_1_perlnfo info = { "Korea Seoul", "333-4444" };
	struct func_22_1_person man = { "Mr.Lee", "820204-xxxx512" };

	man.infor = &info;

	puts(man.name);
	puts(man.pID);
	puts(man.infor->addr);
	puts(man.infor->tel);

}

//1.구조체 정의 번호(int), 영어단어, 한글 뜻 -> 1, apple, 사과
//2.길이 10인 구조체 배열, 초기화
//3.한글로 문제출제, 사용자로부터 영어단어 입력받아 결과출력.
//	종료 원할때까지 반복하며 apple과 Apple 동일(대소문자 구분X)

#define MONTH 12
#define SHOP_CNT 5
#define PDT_CNT 3
struct ex_22_0_PRODUCT {
	int number;
	char name[100];
	int price;
	int stack[20];
	double stackAVE;
};
void ex_22_0() {

	struct ex_22_0_PRODUCT product[PDT_CNT] = { {1,"mp_20_1_1",50000,{100,200,50,30,200}},
	{	2,"mp_20_2_1",30000,{153,300,200,150,49} },
		{3, "mp_20_3_1",100000,{0,120,15,20,53}}
	};

	int sum;

	for (int i = 0;i < PDT_CNT;i++) {
		sum = 0;
		for (int j = 0; j < SHOP_CNT;j++) {
			sum += product[i].stack[j];
		}
		product[i].stackAVE = (double)sum / 5;
	}

	for (int i = 0;i < PDT_CNT;i++) {
		printf("Product number : %d\n", product[i].number);
		printf("Product name : %s\n", product[i].name);
		printf("Porduct price : %d\n", product[i].price);
		printf("Product stack :");
		for (int j = 0;j < SHOP_CNT;j++) {
			printf("%3d ", product[i].stack[j]);
		}
		printf("\n");
		printf("Product stack average : %.2lf\n\n", product[i].stackAVE);
	}
}

struct ex_22_1_admin {
	char adName[20];
	char adPhone[100];
};
struct ex_22_1_market {
	char name[100];
	int SalePerMonth[12];
	int totalSales;
	struct ex_22_1_admin* adminName;
	struct ex_22_1_admin* adminPhone;
};
void ex_22_1() {
	struct ex_22_1_market market = { "chungnam1",{1,2,3},6 };
	
	strcpy(market.adminName->adName, "hyeonhak");
	strcpy(market.adminPhone->adPhone, "papapapa");
}