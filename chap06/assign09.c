/* ���ϸ�: assign09.c
* ����: red,green,blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� make_rgb �Լ��� �����ϰ�,
*       �տ��� ������ get_red, get_green, get_blue �Լ��� �̿��� RGB������ ���� ���ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.05.19.
* ����: v1.0
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
    printf("RGB ����? ");
    scanf("%x", &num);
    rgb_result = get_red(num) + get_green(num) + get_blue(num);
    printf("���� : %06X", rgb_result);
}
int main(void)
{
    make_rgb();
    return 0;
}