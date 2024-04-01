#include<iostream>
using namespace std;

int main(){
	cout<<"Enter Number of Rows: ";
	int n;cin>>n;
    cout<<"What do you want to print: ";
    string shape;cin>>shape;
        for(int c=1; c<=n; c++){
            for(int a=n; a>=c; a--)cout<<"   ";
            for(int b=1; b<c; b++)cout<<shape<<"  ";
            for(int d=0; d<c; d++)cout<<shape<<"  ";
            cout<<endl;
		}
//		for(int i=1; i<=n-2; i++){
//		for(int j=1; j<=n-1;j++)cout<<"   ";
//		for(int k=1; k<=3; k++)cout<<shape<<"  ";
//		cout<<endl;
//		}
	return 0;
}