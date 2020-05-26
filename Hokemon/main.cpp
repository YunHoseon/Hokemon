#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);
void PrintMenu();

int main()
{
	system("mode con cols=90 lines=30");	//콘솔창 크기 조절
	PrintMenu();
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void PrintMenu()
{
	printf("\t _______  _______  ___   _  _______  __   __  _______  __    _ \n");
	printf("\t|       ||       ||   | | ||       ||  |_|  ||       ||  |  | |\n");
	printf("\t|    _  ||   _   ||   |_| ||    ___||       ||   _   ||   |_| |\n");
	printf("\t|   |_| ||  | |  ||      _||   |___ |       ||  | |  ||       |\n");
	printf("\t|    ___||  |_|  ||     |_ |    ___||       ||  |_|  ||  _    |\n");
	printf("\t|   |    |       ||    _  ||   |___ | ||_|| ||       || | |   |\n");
	printf("\t|___|    |_______||___| |_||_______||_|   |_||_______||_|  |__|\n");
}

