#include <stdio.h>

int Q3_solve() {
	int MON = 3500;
	int BRD;
	int BIS;
	int DRK;

	for (BRD = 500; BRD < MON; BRD += 500) {
	for (BIS = 700; BIS < MON; BIS += 700)
	for (DRK = 400; DRK <= MON; DRK += 400)
		if (BRD + BIS + DRK == MON) {
					printf("�� : %d��, ���� : %d��, ����� : %d�� \n", BRD/500, BIS/700, DRK/400);
		}
		else {
			continue;
		}
		
	
	}
	return 0;
}