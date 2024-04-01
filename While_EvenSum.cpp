#include<iostream>
using namespace std;

int main(){
	int start=2, end, even_sum = 0;
	cout<<"Enter a Number: ";cin>>end;
	while(start<=end){
		cout<<start;
		if(start!=end && start!=end-1)cout<<" + ";
		even_sum += start;
		start += 2;
	}
	cout<<" = "<<even_sum;
	return 0;
}