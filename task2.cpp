#include<iostream>
using namespace std;
void truefalse(string b);
  int main(){
	string no1;
	cout <<"Enter 'true' or 'false': ";
        cin >> no1;
	truefalse(no1);
}
void truefalse(string b)
{
	
	if (b == "false")
{
	cout<<"true";}
	 else if(b == "true"){
	cout<<"false";}

}

	