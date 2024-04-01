#include<iostream>
using namespace std;

int main(){
	int n, r;
	cout<<"Enter a Number: ";cin>>n;
	cout<<"Hexadecimal: ";if(n==0)cout<<0;
	while(n>0){
		r=n%16;
		n=n/16;
		if(r==10)cout<<"A";
		else if(r==11)cout<<"B";
		else if(r==12)cout<<"C";
		else if(r==13)cout<<"D";
		else if(r==14)cout<<"E";
		else if(r==15)cout<<"F";
		else cout<<r;
	}
	return 0;
}