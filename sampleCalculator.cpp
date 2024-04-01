#include<iostream>
using namespace std;

int main(){
	int a, b; char op;
	cout<<"Enter values for A: ";cin>>a;
	cout<<"Enter operator(+,-,*,/,%): ";cin>>op;
	cout<<"Enter Values for B: ";cin>>b;
	
	if(op == '+')
		cout<<"Sum of A & B: "<<(a+b);
	else if(op == '-')
		cout<<"Sub of A & B: "<<(a-b);
	else if(op == '*')
		cout<<"Mul of A & B: "<<(a*b);
	else if(op == '/') 
		cout<<"Div of A & B: "<<(a/b);
	else if(op == '%')
		cout<<"Rem of A & B: "<<(a%b);
	else
		cout<<"Invalid Input";
	return 0;
}