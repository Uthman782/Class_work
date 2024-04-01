#include<iostream>
using namespace std;

int main(){
	int range;
	cout<<"Enter Range: ";cin>>range;
	for(int i=1; i<=range; i++){
		for(int j=1; j<=i; j++)cout<<"   ";
		for(int k=range; k>=i; k--)cout<<" X ";
		cout<<endl;
	}
	return 0;
}