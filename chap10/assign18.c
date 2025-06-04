//파일명: Assignment18.c
// 
//내용: 음원 사이트의 플레이리스트 구현하기.이미 등록되 SONG 구조체 배열이 있을 때,
// 전체 곡 목록 보여주기 플레이리스트에 추가할 노래를 번호로 선택, 노래를 추가할 때 마다
// 플레이리스트의 곡 목록과 전체재생 시간 출력하기.
// 
//작성자 : 김윤빈
//날짜 : 2025-06-06
//버전 : v1.0

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
        {"별 보러 가자", "박보검", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I'm Fine", "방탄소년단", "hip-hop", 209},
        {"봄날", "방탄소년단", "hip-hop", 274},
        {"Awake", "방탄소년단", "ballad", 226},
        {"아낙네", "MINO", "hip-hop", 241}
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
    printf("%-3s %-25s %-20s %-10s %s\n", "", "제목", "아티스트", "장르", "재생시간");
    for (int i = 0; i < sz; i++) {
        printf("%-3d %-25s %-20s %-10s %d초\n", i + 1, musiclist[i].name, musiclist[i].singer,
            musiclist[i].category, musiclist[i].jaesangtime);
    }
    return;
}

int scanSongNum() 
{
    int num = 0;
    printf("플레이리스트에 추가할 곡 번호? ");
    scanf("%d", &num);

    if (num < 1 || num > 8) 
    {
        printf("잘못된 곡 번호입니다.\n");
        return scanSongNum();
    }

    return num;
}

void printPL(SONG* musiclist, int i, int num, SONG* playlist) {
    int secResult = 0;
    playlist[i] = musiclist[num - 1];

    printf("<< 플레이리스트 >>\n");
    for (int j = 0; j < 5; j++) 
    {
        if (playlist[j].jaesangtime == 0) 
        {
            break;
        }
        printf("%-25s %-20s %-10s %d초\n", playlist[j].name, playlist[j].singer,
            playlist[j].category, playlist[j].jaesangtime);
        secResult += playlist[j].jaesangtime;
    }
    printf("총 재생시간 : %d초\n", secResult);

    return;
}