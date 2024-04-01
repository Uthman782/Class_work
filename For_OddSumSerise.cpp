#include<iostream>
using namespace std;

int main(){
	int n, odd_sum = 0;
	cout<<"Enter a Number: ";cin>>n;
	for(int i=1;i<=n;i+=2){
		odd_sum += i;
		cout<<i;
		if(i!=n-1 && i!=n)cout<<" + ";
	}
	cout<<" = "<<odd_sum;
	return 0;
}