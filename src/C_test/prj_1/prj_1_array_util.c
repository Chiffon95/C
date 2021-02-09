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
    //���� ���� �ʱ�ȭ
    srand(time(NULL));

    int temp;
    int rand_num;

    for (int i = 0; i < len * 3; i++) {  //len*3: ����� ����� ���ؼ� �迭 ���̺��� ��� ���� ���.

        temp = *(ptr);  //�迭�� ù��° ��Ҹ� �ӽ� ����ҷ� �̵�
        rand_num = rand() % len;  //������ �ε����� ����� ���� �߻�
        *(ptr) = *(ptr + rand_num);  //�迭�� ù���� ��ġ�� ������ �ε����� ��Ұ� ����
        *(ptr + rand_num) = temp;  //ó�� �迭�� ù ��Ҹ� ���� ������ �ε��� ��ҿ� ����

    }
}
