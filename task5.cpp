#include<iostream>
using namespace std;
void possiblebonus(int a,int b);
 main(){
	int a;
	int b;
	cout <<"Enter your position: ";
        cin >> a;
	cout<<"Enter your friend's position: ";
	cin>> b;
	possiblebonus(a,b);
}
void possiblebonus(int a,int b)
{
	a<b;
	if (a+b == 12)
{
	cout<<"true";}
	if (a+b < 12)
	{cout<<"true";}
	else if (a+b>12)
	{cout<<"false";}

	 

}

	