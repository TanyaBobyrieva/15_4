#include <stdio.h>
#include <locale.h>
int main() {
    // ���������� ������ �� ������

    int array[10];
    setlocale(LC_ALL, "ukr");
    // ����� ����������� ��� �������� �������� ������
    printf("������ �������� ������:\n");
    for (int i = 0; i < 10; ++i) {
        printf("element [%d]: ", i);
        // �������� �� �������� ������ �����
        while (scanf_s("%d", &array[i]) != 1) {
            printf("������ �������� ���� �����: ");
            while (getchar() != '\n'); // �������� ������ �����
        }
    }

    // ���������� ���� ��������
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += array[i];
    }

    // ��������� ����������
    printf("���� �������� ������: %d\n", sum);

    return 0;
}

