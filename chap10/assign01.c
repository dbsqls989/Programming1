// ���ϸ�: Assignt01.c
// ����: ���̵�� �н����� ������ ���� LOGIN ����ü �����ϱ�.
//       LOGIN ����ü ������ ����, ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷� �ۼ��ϱ�.
//       �н����� ����� �� *�� ���.
// �ۼ���: ������
// ��¥: 2025-06-06
// ����: v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct LOGIN {
    char ID[20];
    char password[20];
};

void assign10001(void);

int main(void)
{
    assign10001();
    return 0;
}

void assign10001(void)
{
    struct LOGIN user;

    printf("ID? ");
    scanf("%s", user.ID);

    printf("Password? ");
    scanf("%s", user.password);

    printf("\n[��� ���]\n");
    printf("ID: %s\n", user.ID);

    printf("Password: ");
    for (int i = 0; i < strlen(user.password); i++)
    {
        printf("*");
    }
    printf("\n");
}

