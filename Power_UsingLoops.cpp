#include<iostream>
using namespace std;

int main(){
	int n;cout<<"Enter a Number: ";cin>>n;
	int power;cout<<"On Power: ";cin>>power;
	const int j=n;
	for(int i=1;i<power;i++)n*=j;
	if(power==0)n=1;
	cout<<j<<" power "<<power<<" = "<<n;
	
	return 0;
}