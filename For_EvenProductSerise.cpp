#include<iostream>
using namespace std;

int main(){
	int n, even_product = 1;
	cout<<"Enter a Number: ";cin>>n;
	for(int i=2;i<=n;i+=2){
		even_product *= i;
		cout<<i;
		if(i!=n-1 && i!=n)cout<<" X ";
	}
	cout<<" = "<<even_product;
	return 0;
}