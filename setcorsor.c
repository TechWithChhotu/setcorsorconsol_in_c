#include<windows.h>
#include<stdio.h>
void gotoxy(int x,int y){
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
	int x=30,y=10;
	gotoxy(x,y);
	printf("chhotu");
return 0;
}

