#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	for(int i=1;i<n/i;i++)
		if(!(n%i)){
		cout<<n/i<<" x "<<i<<endl;
		}
	return 0;
}