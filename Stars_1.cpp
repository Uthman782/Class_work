#include<iostream>
using namespace std;

int main(){
	int range;
	cout<<"Enter Range: ";cin>>range;
	for(int i=1; i<=range; i++){
		for(int k=1; k<i; k++)cout<<"   ";
		for(int j=range; j>=i; j--)cout<<" X ";
		for(int j=range; j>i; j--)cout<<" X ";
		cout<<endl;
	}
	return 0;
}