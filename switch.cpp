#include<iostream>
using namespace std;

int main(){
	float a, b;
	char op;
	cout<<"Enter A Number: ";cin>>a;
	cout<<"Enter A Operator: ";cin>>op;
	cout<<"Enter A Number: ";cin>>b;
	
	switch(op){
		case '+':
			cout<<"Sum: "<<a+b;break;
		case '-':
			cout<<"Sub: "<<a-b;break;
		case '*':
			cout<<"Mul: "<<a*b;break;
		case '/':
			cout<<"Div: "<<a/b;break;
		default:
			cout<<"You Enter Worng Operator";
	}
	return 0;
}