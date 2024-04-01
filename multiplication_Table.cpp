#include<iostream>
using namespace std;

int main(){
	int table, n;
	cout<<"Table of: ";cin>>table;
	cout<<"End: ";cin>>n;
	for(int i=1; i<=n; i++){
		cout<<i<<" X "<<table<<" = "<<i*table;
		cout<<endl;
	}
	return 0;
}