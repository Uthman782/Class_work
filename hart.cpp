#include<iostream>
using namespace std;

int main(){
	int n=6;
	for(int row=0;row<n;row++){
		for(int col=0;col<n+1; col++)
			if(row==0 && col%3 || (row==1 && !(col%3)) || 
			 (row-col==2) || (row+col==8))cout<<"$ ";
			else cout<<"  ";
			cout<<endl;
		}
	return 0;
}