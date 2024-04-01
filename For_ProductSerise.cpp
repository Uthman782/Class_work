#include<iostream>
using namespace std;

int main(){
	int n, product = 1;
	cout<<"Enter a Number: ";cin>>n;
	cout<<n<<"!= ";
	for(int i=n;i>=1;i--){
		if(i!=n)cout<<" X ";
		cout<<i;
		product*=i;
	}
	cout<<" = "<<product;
	
	return 0;
}