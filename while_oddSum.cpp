#include<iostream>
using namespace std;

int main(){
	int start=1, end, odd_sum = 0;
	cout<<"Enter a Number: ";cin>>end;
	while(start<=end){
		cout<<start;
		if(start!=end && start!=end-1)cout<<" + ";
		odd_sum += start;
		start += 2;
	}
	cout<<" = "<<odd_sum;
	return 0;
}