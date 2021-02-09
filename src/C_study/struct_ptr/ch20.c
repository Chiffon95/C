#include <stdio.h>
#define MEMBER_NUM 4

struct ex_20_point {
	int x, y;
};
void ex_20_0() {
	struct ex_20_point p1, p2;

	printf("Enter number 2 times \n");
	scanf("%d", &p1);
	scanf("%d", &p2);
}
void ex_20_1() {
	struct ex_20_point sqr1 = { 0 }, sqr2 = { 0 };
	int len = abs(sqr1.x - sqr2.x);
	int wid = abs(sqr1.y - sqr2.y);

	printf("Enter x axis, y axis \n");
	scanf("%d %d", &sqr1.x, sqr1.y);
	scanf("%d %d", &sqr2.x, sqr2.y);

	printf("%d x %d = %d", len, wid, len * wid);
}
struct ex_20_team {
	int number;
	char name[20];
	char address[100];
};
void ex_20_2() {
	struct ex_20_team member[MEMBER_NUM] = { 0 };

	for (int i = 0;i < MEMBER_NUM;i++) {
		printf("[%d]", i + 1);
		member[i].number = i + 1;
		printf("Enter name : ");
		scanf("%s", member[i].name);
		printf("Enter address : ");
		scanf("%s", member[i].address);
		printf("\n");
	}

	for (int i = 0;i < MEMBER_NUM;i++) {
		printf("\t%d", member[i].number);
		printf("\t%s", member[i].name);
		printf("\t%s\n", member[i].address);
	}
}
struct q_20_0 {
	char name[20];
	int kor;
	int eng;
	int math;
	int sum;
	double ave;
};
#define STUDENT_MEMBER 2
void q_20_0() {
	struct q_20_0 students[STUDENT_MEMBER] = { 0 };
	char score[10];

	for (int i = 0;i < STUDENT_MEMBER;i++) {
		puts("Enter student's name");
		gets(students[i].name, sizeof(students[i].name));

		puts("Korean score : ");
		gets(score, sizeof(score));
		students[i].kor = atoi(score);

		puts("English score : ");
		gets(score, sizeof(score));
		students[i].eng = atoi(score);

		puts("Math score : ");
		gets(score, sizeof(score));
		students[i].math = atoi(score);

		students[i].sum = students[i].kor + students[i].eng + students[i].math;
		students[i].ave = (double)students[i].sum / 3;
	}

	puts("Enter name -> average print");
	gets(score, sizeof(score));

	for (int i = 0;i < STUDENT_MEMBER;i++) {
		if (strcmp(score, students[i].name) != 0)
			printf("%lf", students[i].ave);
		else
			printf("Wrong name");
	}
}
//1.구조체 정의 : 이름, 나이, 이메일
//2.길이가 4인 구조체 배열을 전역변수 선언
//3.구조체를 초기화하는 함수
//4.이름을 입력하면 나이와 이메일을 출력하는함수(또는 입력하면 반환)
struct info {
	char name[30];
	int age;
	char email[100];
};

struct info memberInfo[4] = { 0 };

void init_memberInfo() {

	struct info data[4] = {
		{ "진선", 30, "aaa@bbb.ccc" },
		{ "지연", 28, "abc@aaa.ccc"},
		{"종현", 25, "ccc@ddd.ccc"},
		{"주명", 26, "ddd@ddd.ccc"}
	};

	for (int i = 0; i < 4; i++) {
		memberInfo[i].age = data[i].age;
		strcpy(memberInfo[i].name, data[i].name);
		strcpy(memberInfo[i].email, data[i].email);
	}

}

struct info getInformation(const char* name) {

	struct info result = { 0 };

	for (int i = 0; i < 4; i++) {
		if (!strcmp(name, memberInfo[i].name)) {
			return memberInfo[i];

		}
	}

	return result;
}

int getInformationIndex(const char* name) {

	int i;
	for (i = 0; i < 4; i++) {
		if (!strcmp(name, memberInfo[i].name)) {
			return i;

		}
	}

	return -1;
}

//int main() {
//
//	char name[20] = { 0 };
//
//	init_memberInfo();
//	printf("조회할 사람의 이름입력 : ");
//	scanf("%s", name);
//
//	struct info result = getInformation(name);
//	if (strlen(result.name)) {
//		printf("%s %d", result.email, result.age);
//	}
//	else {
//		printf("일치하는 데이터 없음\n");
//	}
//
//
//	printf("\n");
//
//	int index = getInformationIndex(name);
//	if (index > 0) {
//		printf("%s %d", memberInfo[index].email, memberInfo[index].age);
//	}
//	else {
//		printf("일치하는 데이터 없음");
//	}
//
//	return 0;
//
//}