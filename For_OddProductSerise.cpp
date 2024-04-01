#include<iostream>
using namespace std;

int main(){
	int n, odd_product = 1;
	cout<<"Enter a Number: ";cin>>n;
	for(int i=n;i<=1;i-=2){
		odd_product *= i;
		cout<<i;
		if(i!=n-1 && i!=n)cout<<" X ";
	}
	cout<<" = "<<odd_product;
	return 0;
}