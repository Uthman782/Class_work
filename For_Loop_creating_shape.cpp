#include<iostream>
using namespace std;

int main(){
	int rows;
	cout<<"No of Rows: ";cin>>rows;
	for(int i=1; i<=rows; i++){
		for(int j=1; j<=i; j++)cout<<" X ";
		cout<<endl;
	}
	return 0;
}