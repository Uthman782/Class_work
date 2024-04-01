#include<iostream>
using namespace std;

int main(){
	int a, b;
	cout<<"Enter A: ";
	cin>>a;
	cout<<"Enter B: ";
	cin>>b;
	
	if(a>b)
		cout<<"'A' is Greater then 'B'.";
	else if(b>a)
		cout<<"'B' is Greater then 'A'.";
	else
		cout<<"'A' and 'B' are equal.";
	
	return 0;
}