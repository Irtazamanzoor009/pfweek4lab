#include<iostream>
using namespace std;

void isEligible(int age);

main()
{
	while(true)
	{
		int age;
		cout<<"Enter your age: ";
		cin>>age;
		
		isEligible(age);
	}
}

void isEligible(int age)
{
	
	if(age > 18)
	{
		cout<<"You are eligible for vote."<<endl;
	}
	if(age < 18)
	{
		cout<<"You are not eligible for vote."<<endl;
	}
}