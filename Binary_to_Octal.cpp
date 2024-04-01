#include<iostream>
using namespace std;

int main(){
	int bin, r;
	cout<<"Enter Binary only: ";cin>>bin;
	int len=bin, arr_size;
	for(arr_size=0;len>0;arr_size++){
		for(int j=1;j<=3;j++){
			r=len%10;
			len=len/10;
	}	}
	int octal[arr_size]={0};
	for(int index=0;bin>0;index++){
		int  power=1;
		for(int i=1; i<=3; i++){
			r = bin%10;
			bin=bin/10;
			if(i>1)power*=2;
			octal[index]+=r*power;
	}	}
	cout<<"Groups: "<<arr_size<<endl<< "Octal: ";
	for(int i=arr_size-1;i>=0; i--)
		cout<<octal[i]<<" ";
	return 0;
}