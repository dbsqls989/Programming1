// ���ϸ�: Assignment03.c
// ����: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ�, 
//       ����ü �迭���� ���̵� ã��-> �Է¹��� �н������ �� �� ������ �α��� ���� ���
// �ۼ���: ������
// ��¥: 2025-06-06
// ����: v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 5

typedef struct login
{
    char id[20];
    char password[20];
} LOGIN;

int main() 
{
    LOGIN users[SIZE] = 
    {
        {"guest", "idontknow"},
        {"user1", "hello123"},
        {"user2", "hello789"},
        {"user3", "bye123"},
        {"user4", "bye456"}
    };

    char input_id[20];
    char input_password[20];
    int found = 0;

    printf("ID? ");
    scanf("%s", input_id);
    printf("PW: ");
    scanf("%s", input_password);

    for (int i = 0; i < SIZE; i++) 
    {
        if (strcmp(users[i].id, input_id) == 0 && strcmp(users[i].password, input_password) == 0) {
            printf("�α��� ����\n");
            return 0;
        }
    }

    printf("�α��� ����\n");
    return 0;
}