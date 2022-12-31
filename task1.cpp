#include<iostream>
using namespace std;

void add(int num1, int num2);
void product(int num1, int num2);
void subtract(int num1, int num2);
void divide(float num1, float num2);


int main()
{
while(true)
{
	int num1;
	int num2;
	char op;
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;
	cout<<"Enter operator(+ - * /): ";
	cin>>op;

	if(op == '+')
	{
		add(num1,num2);
	}
	if(op == '*')
	{
		product(num1,num2);
	}
	if(op == '-')
	{
		subtract(num1,num2);
	}
	if(op == '/')
	{
		divide(num1,num2);
	}
}

}

void add(int num1, int num2)
{
   int sum;
   sum = num1 + num2;
   cout<<"Sum is: "<<sum<<endl;
}

void product(int num1, int num2)
{
  int product;
  product = num1 * num2;
  cout<<"Product is: "<<product<<endl;

}

void subtract(int num1, int num2)
{
 int subtract;
 subtract = num1 - num2;
 cout<<"Subtraction is: "<<subtract<<endl;

}

void divide(float num1, float num2)
{
 float divide;
 divide = num1 / num2;
 cout<<"Division is: "<<divide<<endl;
}