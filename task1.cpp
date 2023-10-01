#include<iostream>
using namespace std;
void truefalse(int a,int b);
 int main(){
	int no1;
	int no2;
	cout <<"Enter the first number: ";
        cin >> no1;
	cout<<"Enter the second number: ";
	cin >> no2;
	truefalse(no1,no2);
}
void truefalse(int a,int b)
{
	if (a==b)
	{cout<<"true";}
	else{ cout<<"false";}
}
	



