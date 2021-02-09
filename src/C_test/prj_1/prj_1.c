#include "prj_1_array_util.h"

int prj_1() {
	int arr[] = { 1,2,3,4,5,6,7 };
	int len = sizeof(arr) / sizeof(arr[0]);

	prj_1_showArray(arr, len);

	prj_1_shuffleArray(arr, len);

	prj_1_showArray(arr, len);

	return 0;
}