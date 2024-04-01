#include<iostream>
using namespace std;

int main(){
	int rows;
	cout<<"No of Rows: ";cin>>rows;
	for(int i=rows; i>=1; i--){
		for(int j=i; j>=1; j--){
			cout<<" X ";
		}
		cout<<endl;
	}
	
	return 0;
}