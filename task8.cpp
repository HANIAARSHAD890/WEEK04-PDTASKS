#include<iostream>
using namespace std;
void pet( int holidays);
main(){
	int holidays;
	cout <<"Holidays: ";
        cin >> holidays;
	pet(holidays);
}
void pet( int holidays)
{
	float workingdays;
	float gametime;
	float normdifference;
	int hours;
	int minutes;
	
	workingdays=365-holidays;
	gametime=(workingdays*63)+(holidays*127);
	if (gametime>30000)
	{normdifference=gametime-30000;}
	else{normdifference=30000-gametime;}
	hours=normdifference/60.00;
	minutes=  normdifference-(60*hours);
	if(gametime>30000)
	{cout<<"Tom will run away"<<endl;
	cout<<hours;
	cout<<" hours and ";
	cout<<minutes;
	cout<<" minutes for play";}
	else
	{cout<<"Tom sleeps well"<<endl;
	cout<<hours;
	cout<<" hours and ";
	cout<<minutes;
	cout<<" minutes less for play";}
	
}