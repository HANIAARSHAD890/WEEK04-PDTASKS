
#include<iostream>
#include<windows.h>
using namespace std;
void H(int x,int y);
void A(int x,int y);
void S(int x,int y);
void N(int x,int y);
void space(int x,int y);
void gotoxy(int x,int y);

main()

{	int x;
	int y;
	H(x,y);	
	A(x,y);
	S(x,y);
	S(x,y);
	A(x,y);
	N(x,y);
}

void H(int x,int y)
{
	gotoxy(15,7);
	cout<<"H"<<endl;
	
}	
void A(int x,int y)
{
	gotoxy(15,8);
	cout<<"A"<<endl;
	gotoxy(15,11);
	cout<<"A"<<endl;
}	
void S(int x,int y)
{
	gotoxy(15,9);
	cout<<"S"<<endl;
	gotoxy(15,10);
	cout<<"S"<<endl;
}
void N(int x,int y)
{
	gotoxy(15,12);
	cout<<"N"<<endl;

}

void space(int x,int y)
{
	gotoxy(7,9);
	cout<<"   "<<endl;

}
void gotoxy(int x,int y)

{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
	



}
