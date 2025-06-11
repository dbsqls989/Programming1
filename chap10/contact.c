#include <stdio.h>
#include <string.h>
#include "contact.h"


// isEqualContact()
// ��ȯ��: ���� ������ 1 (true)��ȯ, �׷��� ������ 0 (false) �� ��ȯ
// �Է�: ���� �� Contact��


int isEqualContact(Contact a, Contact b)
{
    if (a.year == b.year && a.gender == b.gender &&
        strcmp(a.name, b.name) == 0 &&
        strcmp(a.phone, b.phone) == 0)
    {
        return 1;
    }

    return 0;
}

void printContect(Contact c1)
{
    // �̸�: 000
    // ����: 00000000000
    // ����: �� Ȥ�� ��
    // ����: 0000

    printf("�̸�: %s \n", c1.name);
    printf("����: %s \n", c1.phone);
    printf("����: %s \n", c1.gender == MAN ? "����" : "����");
    printf("�⵵: %4d \n", c1.year);
}

int isEqualContactPtr(const Contact* a, const Contact* b)
{
    if (a->year == b->year && a->gender == b->gender &&
        strcmp(a->name, b->name) == 0 &&
        strcmp(a->phone, b->phone) == 0)
    {
        return 1;
    }

    return 0;
}

void printContectPtr(Contact* ct)
{
    // �̸�: 000
    // ����: 00000000000
    // ����: �� Ȥ�� ��
    // ����: 0000

    printf("�̸�: %s \n", ct->name);
    printf("����: %s \n", ct->phone);
    printf("����: %s \n", ct->gender == MAN ? "����" : "����");
    printf("�⵵: %4d \n", ct->year);

    return;
}