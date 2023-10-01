#include<iostream>
using namespace std;
void checkspeed(int speed);
main(){
	int no1;
	cout <<"Speed: ";
        cin >> no1;
	checkspeed(no1);
}
void checkspeed(int speed)
{
	if (speed > 100)
	{cout<<"Halt... YOU WILL BE CHALLENGED!!!";}
	else 
	{cout<<"Perfect! You're going good.";}

	 

}

	