//���ϸ�: Assignment18.c
// 
//����: ���� ����Ʈ�� �÷��̸���Ʈ �����ϱ�.�̹� ��ϵ� SONG ����ü �迭�� ���� ��,
// ��ü �� ��� �����ֱ� �÷��̸���Ʈ�� �߰��� �뷡�� ��ȣ�� ����, �뷡�� �߰��� �� ����
// �÷��̸���Ʈ�� �� ��ϰ� ��ü��� �ð� ����ϱ�.
// 
//�ۼ��� : ������
//��¥ : 2025-06-06
//���� : v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct 
{
    char name[25];
    char singer[20];
    char category[10];
    int jaesangtime;
} SONG;

void assignment1018();
void printMusic(SONG* musiclist, int sz);
int scanSongNum();
void printPL(SONG* musiclist, int i, int num, SONG* playlist);

int main() 
{
    assignment1018();
    return 0;
}

void assignment1018() 
{
    SONG musiclist[8] = 
    {
        {"thank u, next", "Ariana Grande", "pop", 208},
        {"Attention", "Charlie Puth", "pop", 211},
        {"�� ���� ����", "�ں���", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I'm Fine", "��ź�ҳ��", "hip-hop", 209},
        {"����", "��ź�ҳ��", "hip-hop", 274},
        {"Awake", "��ź�ҳ��", "ballad", 226},
        {"�Ƴ���", "MINO", "hip-hop", 241}
    };

    SONG playlist[5] = { 0 };

    int sz = sizeof(musiclist) / sizeof(musiclist[0]), num;

    printMusic(musiclist, sz);

    for (int i = 0; i < 5; i++) 
    {
        num = scanSongNum();

        if (num == 0) 
        {
            break;
        }

        printPL(musiclist, i, num, playlist);
    }

    return;
}

void printMusic(SONG* musiclist, int sz) {
    printf("%-3s %-25s %-20s %-10s %s\n", "", "����", "��Ƽ��Ʈ", "�帣", "����ð�");
    for (int i = 0; i < sz; i++) {
        printf("%-3d %-25s %-20s %-10s %d��\n", i + 1, musiclist[i].name, musiclist[i].singer,
            musiclist[i].category, musiclist[i].jaesangtime);
    }
    return;
}

int scanSongNum() 
{
    int num = 0;
    printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
    scanf("%d", &num);

    if (num < 1 || num > 8) 
    {
        printf("�߸��� �� ��ȣ�Դϴ�.\n");
        return scanSongNum();
    }

    return num;
}

void printPL(SONG* musiclist, int i, int num, SONG* playlist) {
    int secResult = 0;
    playlist[i] = musiclist[num - 1];

    printf("<< �÷��̸���Ʈ >>\n");
    for (int j = 0; j < 5; j++) 
    {
        if (playlist[j].jaesangtime == 0) 
        {
            break;
        }
        printf("%-25s %-20s %-10s %d��\n", playlist[j].name, playlist[j].singer,
            playlist[j].category, playlist[j].jaesangtime);
        secResult += playlist[j].jaesangtime;
    }
    printf("�� ����ð� : %d��\n", secResult);

    return;
}