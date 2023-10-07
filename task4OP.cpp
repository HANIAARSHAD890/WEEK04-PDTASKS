#include<iostream>
#include<conio.h>
using namespace std;
	void printMenu();
	float CalculateAggregate(string name,float Matricmarks,float interMarks,float ecatMark);
	float CompareMarks( string nameStd1,string nameStd2,float ecatMarksStd1,float ecatMarksStd2);
	string name;
	float Matricmarks;
	float interMarks;
	float ecatMark;
	string nameStd1;
	string nameStd2;
	float ecatMarksStd1;
	float ecatMarksStd2;
 main()
{
	printMenu();
	
	
}

void printMenu()
{
	int option;
	string name;
	float CompareMarks( string nameStd1,string nameStd2,float ecatMarksStd1,float ecatMarksStd2);
	float CalculateAggregate(string name,float Matricmarks,float interMarks,float ecatMark);
	
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"  UAMS    ";
	cout<<"SYSTEM   OF   ";
	cout<<"UNIVERSITY OF ENGINEERING AND TECHNOLOGY , LAHORE "<<endl;
	cout<<"**********************************************************************************************************************"<<endl;
	cout<<"Press any key to continue"<<endl;
	getch();
	cout<<"**********************************************************************************************************************"<<endl;
	cout<<"						OPTIONS TO BE SELECTED							     "<<endl;
	cout<<"**********************************************************************************************************************"<<endl;
	cout<<"1.Calculate Aggregate"<<endl;
	cout<<"2.COMPARE MARKS"<<endl;
	cout<<"YOUR OPTION"<<endl;
	cin>>option;
	if(option==1)
{	
	cout<<"You have entered option1"<<endl;
	CalculateAggregate(name, Matricmarks,interMarks,ecatMark);
	
}
	if (option==2)
{
	cout<<"You have entered option2"<<endl;
	CompareMarks(nameStd1,nameStd2,ecatMarksStd1,ecatMarksStd2);
	
}
	cout<<"Press any key to continue: ";
	getch();
	
	system("cls");

}
float CalculateAggregate(string name,float Matricmarks,float interMarks,float ecatMark)
{
	cout<<"Enter your name " ;
	cin>>name;
	cout<<"Enter your intermarks " ;
	cin>>interMarks;
	cout<<"Enter your matric marks ";
	cin>>Matricmarks;
	cout<<"Enter your ecatMark ";
	cin>>ecatMark;
	float aggregate;
	aggregate=(((Matricmarks/1100.0)*30)+((interMarks/550.0)*30)+((ecatMark/400.0)*40));
	cout<<"The aggregate of  ";
	cout<<name;
	cout<<" is ";
	cout<<aggregate;
	cout<<"%  "<<endl;
	
}	
	
float CompareMarks( string nameStd1,string nameStd2,float ecatMarksStd1,float ecatMarksStd2)
{	

	cout<<"Enter your name (STUDENT1): ";
	cin>>nameStd1;
	cout<<"Enter your ECAT marks(STUDENT 1): ";
	cin>>ecatMarksStd1;
	cout<<"Enter your name (STUDENT2): ";
	cin>>nameStd2;
	cout<<"Enter your ECAT marks(STUDENT 2): ";
	cin>>ecatMarksStd2;
	
	if (ecatMarksStd1>ecatMarksStd2)
{
	cout<<"1st roll no is ";
	cout<<nameStd1;	
}
	if(ecatMarksStd1<ecatMarksStd2)
{
	cout<<"1st roll no is ";
	cout<<nameStd2<<endl;
}
}
	
	