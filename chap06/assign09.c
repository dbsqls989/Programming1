/* 파일명: assign09.c
* 내용: red,green,blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb 함수를 정의하고,
*       앞에서 정의한 get_red, get_green, get_blue 함수를 이용해 RGB색상의 보색 구하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.05.19.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(int num);
int get_green(int num);
int get_blue(int num);
void make_rgb(void);

int get_red(int num)
{
    int temp = num >> 16;
    temp = ~temp;
    temp = temp << 16;
    temp = temp & 0x00FF0000;
    return temp;
}
int get_green(int num)
{
    num = num & 0x0000FF00;
    num = ~num;
    num = num & 0x0000FF00;
    return num;
}
int get_blue(int num)
{
    num = num & 0x000000FF;
    num = ~num;
    num = num & 0x000000FF;
    return num;
}
void make_rgb(void)
{
    int num, rgb_result;
    printf("RGB 색상? ");
    scanf("%x", &num);
    rgb_result = get_red(num) + get_green(num) + get_blue(num);
    printf("보색 : %06X", rgb_result);
}
int main(void)
{
    make_rgb();
    return 0;
}