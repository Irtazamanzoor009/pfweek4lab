#include<iostream>
using namespace std;

void isEven(int number);

main()
{
	while(true)
	{
		int number;
		cout<<"Enter a number: ";
		cin>>number;
		
		isEven(number);
	}


}

void isEven(int number)
{
	if(number % 2 == 0)
	{
		cout<<"Entered number is even."<<endl;
	}
	if(number % 2 != 0 )
	{
		cout<<"Entered number is odd."<<endl;
	}
}