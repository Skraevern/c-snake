#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#include <conio.h>
#include<time.h>
#include <ctype.h>
#include <time.h>
//#include <windows.h>
//#include <process.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int length, bend_no, len, life;
char key;

int score();
int Scoreonly();
void record();
void load();
void Delay(long double);
void Move();
void Food();
void Print();
void gotoxy(int x, int y);
void GotoXY(int x, int y);
void Bend();
void Boarder();
void Up();
void Right();
void Down();
void Left();
void ExitGame();


