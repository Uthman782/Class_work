#include<iostream>
using namespace std;

int main(){
	int n, sum = 0;
	cout<<"Enter a Number: ";cin>>n;
	for(int i=1;i<=n;i++){
		sum += i;
		cout<<i;
		if(i!=n)cout<<" + ";
	}
	cout<<"= "<<sum;
	return 0;
}