//파일명:assingnment10.c
//내용:정수를 8진수,10진수,16진수 중 하나로 입력받아 각각 얼마에 해당하는지 출력하는 프로그램 작성.
//작성자: 김윤빈
//날짜: 2025-03-27
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void processInput(void)
{
    int num = 0;
    printf("8진수로 입력하려면 '012', 16진수로 입력하려면 '0x12'처럼 입력하세요.\n");
    printf("정수? ");
    scanf("%i", &num);

    printf("8진수: %#o\n", num);
    printf("10진수: %d\n", num);
    printf("16진수: %#x\n", num);
}

int main(void)
{
    processInput();
    return 0;
}