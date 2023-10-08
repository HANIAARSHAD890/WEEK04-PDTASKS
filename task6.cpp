#include<iostream>
using namespace std;
void longestTime( int h,int m);
main(){
	int h;
	int m;
	cout <<"Enter the number of hours: ";
        cin >> h;
	cout<<"Enter the number of minutes: ";
	cin>> m;
	longestTime(h,m);
}
void longestTime(int h,int m)
{
	int hours;
	hours=h*60;
	if (hours >m)
{
	cout<<h;}
	if (hours <m)
	{cout<<m;}

	 

}


	