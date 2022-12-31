#include<iostream>
using namespace std;

void add();
void product();

main()
{
  add();
  product();

}

void add()
{
  int num1;
  int num2;
  int sum;
  cout<<"Enter 1st number: ";
  cin>>num1;
  cout<<"Enter 2nd number: ";
  cin>>num2;
  sum = num1 + num2;
  cout<<"Sum is: "<<sum<<endl;

}

void product()
{
  int num3;
  int num4;
  int multiply;
  cout<<"Enter 1st number: ";
  cin>>num3;
  cout<<"Enter 2nd number: ";
  cin>>num4;
  multiply = num3 * num4;
  cout<<"Multilpy is: "<<multiply<<endl;

}