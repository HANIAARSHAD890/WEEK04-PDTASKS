#include<iostream>
using namespace std;
void tpChecker( int people ,int tp);
main(){
	int people;
	int tp;
	cout <<"Number of people in the household: ";
        cin  >>people;
	cout <<"Number of rolls of TP: ";
	cin  >>tp;
	tpChecker(people,tp);
}
void tpChecker( int people,int tp)
{	int tpsheets;
	int usedSheets;
	int days;
	tpsheets=500*tp;
	usedSheets=57*people;
	days=tpsheets/usedSheets;
	cout<<"Your TP will "; 
	
	if (days > 14)
	{
	cout<<"last ";
	cout<<days;
	cout<<" days, no need to panic!";
	}
	else if (days==14) 
	{cout<<"last ";
	cout<<days;
	cout<<" days, no need to panic!";
	}
	else if (days<14)
	{cout<<"only last ";
	cout<<days;
	cout<<" days,";
	cout<<" buy more!";}
}