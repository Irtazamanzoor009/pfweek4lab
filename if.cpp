#include<iostream>
using namespace std;

void ifpass(int marks);

main()
{

  int marks;
  while(true)
{
  cout<<"Enter marks: ";
  cin>>marks;

  ifpass(marks);
} 
}

void ifpass(int marks)
{
 
 if(marks > 50)
  {
	cout<<"Pass"<<endl;
  }
  if(marks < 50)
  {
	cout<<"Fail"<<endl;
  }
  if(marks == 50)
  { 
	cout<<"Prh ly bhai"<<endl;
  }
 
}