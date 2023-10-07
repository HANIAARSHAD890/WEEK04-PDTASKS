
#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void moveplayer(int x,int y);
void gotoxy(int x,int y);

main()
{
	int x=4;
	int y=3;	

	system("cls");
	printMaze();
	while(true)
{
	moveplayer(x,y);
	y=y+1;
	if (y==10)
	{
		y=3;


}
}
}
void printMaze()
	{
	cout<<"##########################################"<<endl;
	cout<<"#                                        #"<<endl;
	cout<<"#                                        #"<<endl;
	cout<<"#                                        #"<<endl;
	cout<<"#                                        #"<<endl;
	cout<<"#                                        #"<<endl;
	cout<<"#                                        #"<<endl;
	cout<<"#                                        #"<<endl;
	cout<<"#                                        #"<<endl;
	cout<<"#                                        #"<<endl;
	cout<<"#                                        #"<<endl;
	cout<<"##########################################"<<endl;

}
void gotoxy(int x,int y)

{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
	

}

void moveplayer(int x,int y)
{
	gotoxy(x,y);
	cout<<"p";
	Sleep(100);
	gotoxy(x,y);
	cout<<" ";

}

