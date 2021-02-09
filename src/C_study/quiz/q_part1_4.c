#include <stdio.h>
int cal(int cal_money);
int f_th = 0, o_th = 0, f_hun = 0, o_hun = 0, ten = 0, one = 0;

void Q4_solve() {
	int money_1 = 253100;
	int money_2 = 126050;

	f_th, o_th, f_hun, o_hun, ten, one += cal(money_1);
	f_th, o_th, f_hun, o_hun, ten, one += cal(money_2);

	printf("돈 계산 \n");
	printf("5만원 : %d장\n만원 : %d장\n5천원 : %d장\n천원 : %d장\n백원 : %d개\n십원 : %d개", f_th, o_th, f_hun, o_hun, ten, one);
	
}

int cal(int cal_money) {
	while (1) {
		if (cal_money >= 50000) {
			cal_money -= 50000;
			f_th++;
			continue;
		}
		else if (cal_money >= 10000) {
			cal_money -= 10000;
			o_th++;
			continue;
		}
		else if (cal_money >= 5000) {
			cal_money -= 5000;
			f_hun++;
			continue;
		}
		else if (cal_money >= 1000) {
			cal_money -= 1000;
			o_hun++;
			continue;
		}
		else if (cal_money >= 100) {
			cal_money -= 100;
			ten++;
			continue;
		}
		else {
			cal_money -= 10;
			one++;
			break;
		}

	}
	return f_th, o_th, f_hun, o_hun, ten, one;
}