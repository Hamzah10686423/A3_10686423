#include<iostream>
using namespace std;
int main()
{
	
	float value;
	cout<<"Enter your score"<<endl;
	cin>>value;
	if(!cin)
	{
		
		cout<<"Error: Your input is not a number"<<endl ;
	
	}
	else
	{
		cout<<"Marks"<<"\t\tGrade point"<<"\t\tInterpretation"<<endl;
		if(value>=80 && value<=100 )
			cout<<"You had an A"<<"\t\t4.0"<<"\t\tOutstanding"<<endl;
		else if(value>=75 && value<=79)
			cout<<"You had a B+"<<"\t\t3.5"<<"\t\tVery Good"<<endl;
		else if(value>=70 && value<=74)
			cout<<"You had a B"<<"\t\t3.0"<<"\t\tGood"<<endl;
		else if(value>=65 && value<=69)
			cout<<"You had a C+"<<"\t\t2.5"<<"\t\tFairly Good"<<endl;
		else if(value>=60 && value<=64)
			cout<<"You had a C"<<"\t\t2.0"<<"\t\tAverage"<<endl;
		else if(value>=55 && value<=59)
			cout<<"You had a D+"<<"\t\t1.5"<<"\t\tBelow Average"<<endl;
		else if(value>=50 && value<=54)
			cout<<"You had a D"<<"\t\t1.0"<<"\t\tMarginal Pass"<<endl;
		else if(value>=45 & value<=49)
			cout<<"You had a E"<<"\t\t0.5"<<"\t\tUnsatisfactory"<<endl;
		else if(value<=44)
			cout<<"You had an F"<<"\t\t0"<<"\t\tFail"<<endl;
	
	return 0;
	}
	

}
