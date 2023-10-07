

#include<iostream>
#include<windows.h>
using namespace std;
void printName(int x,int y);
void gotoxy(int x,int y);

main()

{	int x;
	int y;
	printName(x,y);	

}

void printName(int x,int y)
{
	gotoxy(x,y);
	cout<<"HANIA ARSHAD";
}	
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
	



}



