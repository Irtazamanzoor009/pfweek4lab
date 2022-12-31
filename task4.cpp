#include<iostream>
using namespace std;

void calculateBill(string day, float amount , float result);

main()
{
		string day;
		float amount;
		float result;
		while(true)
{
		cout<<"Enter name of day: ";
		cin >> day;
		cout<<"Enter total amount: ";
		cin>> amount;
       calculateBill( day, amount ,result);
}		
	

}
void calculateBill(string day, float amount , float result)
{
	if(day == "sunday" )
	{
		result=amount*0.1;
          float paidamount=amount-result; 
	cout<<"Amount to be paid is: "<<paidamount<<endl;
	}
	if(day != "sunday")
	{
		cout<<"Your amount is: "<<amount <<endl;
	}

}