#include<iostream>
using namespace std;

int main(){
	int n, even_sum = 0;
	cout<<"Enter a Number: ";cin>>n;
	for(int i=2;i<=n;i+=2){
		even_sum += i;
		cout<<i;
		if(i!=n-1 && i!=n)cout<<" + ";
	}
	cout<<" = "<<even_sum;
	return 0;
}