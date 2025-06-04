// 파일명: Assignment03.c
// 내용: LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성, 
//       구조체 배열에서 아이디 찾기-> 입력받은 패스워드랑 비교 후 같으면 로그인 성공 출력
// 작성자: 김윤빈
// 날짜: 2025-06-06
// 버전: v1.0

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
            printf("로그인 성공\n");
            return 0;
        }
    }

    printf("로그인 실패\n");
    return 0;
}