// 파일명: Assignt01.c
// 내용: 아이디와 패스워드 관리를 위한 LOGIN 구조체 정의하기.
//       LOGIN 구조체 변수를 선언, 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램 작성하기.
//       패스워드 출력할 때 *로 출력.
// 작성자: 김윤빈
// 날짜: 2025-06-06
// 버전: v1.0

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

    printf("\n[출력 결과]\n");
    printf("ID: %s\n", user.ID);

    printf("Password: ");
    for (int i = 0; i < strlen(user.password); i++)
    {
        printf("*");
    }
    printf("\n");
}

