/* 파일명: assign06.c
* 내용: 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 choose_menu 함수를 작성하고,
		choose_menu의 리턴값에 따라 어떤 메뉴가 선택되었는지 간단히 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.05.19.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void);
void assign06();

int main(void)
{
	assign06();
	return 0;
}

void assign06()
{
	int choose = 0;
	do
	{
		printf("[1.파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? ");
		scanf("%d", &choose);

		switch(choose)
		{
		case 1:
			printf("파일 열기를 수행합니다.\n");
			break;
		case 2:
			printf("파일 저장을 수행합니다.\n");
			break;
		case 3:
			printf("인쇄를 수행합니다.\n");
			break;
		} 
	} while (choose != 0);
}