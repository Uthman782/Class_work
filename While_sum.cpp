#include<iostream>
using namespace std;

int main(){
	int start=1, end, sum = 0;
	cout<<"Enter a Number: ";cin>>end;
	while(start<=end){
		cout<<start;
		if(start!=end)cout<<" + ";
		sum += start;
		start++;
	}
	cout<<" = "<<sum;
	return 0;
}