#include<iostream>
using namespace std;

int main(){
	int i=1 ,rows;
	cout<<"No of Rows: ";cin>>rows;
	while(i<=rows){
		int j=rows;
		while(j>=i){
		cout<<" X ";j--;
		}
		i++;
		cout<<endl;
	}
	return 0;
}