#include<iostream>
using namespace std;

int main(){
	int start=1, end, fac = 1;
	cout<<"Enter a Number: ";cin>>end;
	while(start<=end){
		cout<<start;
		if(start!=end)cout<<" X ";
		fac *= start;
		start++;
	}
	cout<<" = "<<fac;
	return 0;
}