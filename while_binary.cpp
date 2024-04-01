#include<iostream>
using namespace std;

int main(){
	int n, r;
	cout<<"Enter a Number: ";cin>>n;
	cout<<"Binary: ";
	while(n>0){
		r=n%2;
		n=n/2;
		cout<<r;
	}
	return 0;
}
          