#include <stdio.h>
#include <ctype.h>

int main() {
    int num;
    char str[10];

    printf("��������͂��Ă�������: ");
    scanf("%s", str);

    // ���͂��ꂽ������̊e�������`�F�b�N���܂�
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            printf("�����ȊO�̒l�����͂���܂����B\n");
            return 1;
        }
    }

    // ������S�̂������ł��邱�Ƃ��m�F�ł����ꍇ�Astrtol�֐����g�p���Đ��l�ɕϊ����܂�
    num = strtol(str, NULL, 10);

    printf("���͂��ꂽ�l�� %d �ł��B\n", num);

    return 0;
}