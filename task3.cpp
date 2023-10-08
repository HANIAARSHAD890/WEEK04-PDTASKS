#include<iostream>
using namespace std;
void DISCOUNT(string country,float ticketprice);
 int main(){
	string no1;
	float no2;
	cout <<"Enter the country's name: ";
        cin >> no1;
	cout<<"Enter the ticket price in dollars: $";
	cin>>no2;
	DISCOUNT(no1,no2);
}
void DISCOUNT(string country,float ticketprice)
{	float result;
	float percentage;
	
	
	if (country == "Pakistan")
	{percentage= (0.05* ticketprice);}
	else if (country=="India")
	{percentage=(0.2*ticketprice);}
	else if (country=="Ireland")
	{percentage=(0.1*ticketprice);}
	else if (country=="England")
	{percentage=(0.3*ticketprice);}
	else if (country=="Canada")
	{percentage=(ticketprice*0.45);}
	result=ticketprice-percentage;
	cout<<"Final ticket price after discount: $";
	cout<<result; 
}

	