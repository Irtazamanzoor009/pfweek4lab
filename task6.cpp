#include<iostream>
using namespace std;

void printname(string name);
void printwrongname(string name);

main()
{
	
	string name;
	cout<<"Enter your name: ";
	cin>>name;
while(name == "irtaza")
{	
	printname(name);
} 
	
	printwrongname(name);


}
void printname(string name)
{
	if(name == "irtaza")
	{
		cout<<name<<endl;
	}
	
}
void printwrongname(string name)
{
	if(name != "irtaza")
	{	
		cout<<"Please enter correct name: ";
	}
	
}
