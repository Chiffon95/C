#include <stdio.h>
#include <time.h>

//ShowArray
void prj_1_showArray(int* ptr, int len) {

    for (int i = 0; i < len; i++) {
        printf("%d, ", *(ptr + i));
    }
}

//ShuffleArray
void prj_1_shuffleArray(int* ptr, int len) {
    //난수 선택 초기화
    srand(time(NULL));

    int temp;
    int rand_num;

    for (int i = 0; i < len * 3; i++) {  //len*3: 충분히 섞기기 위해서 배열 길이보다 길게 만들어서 사용.

        temp = *(ptr);  //배열의 첫번째 요소를 임시 저장소로 이동
        rand_num = rand() % len;  //임의의 인덱스로 사용할 난수 발생
        *(ptr) = *(ptr + rand_num);  //배열의 첫번재 위치에 임의의 인덱스의 요소값 저장
        *(ptr + rand_num) = temp;  //처음 배열의 첫 요소를 위의 임의의 인덱스 요소에 저장

    }
}
