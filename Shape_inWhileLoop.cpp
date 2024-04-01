#include<iostream>
using namespace std;

int main(){
	int range, i=1;
	cout<<"Enter Range: ";cin>>range;
	while(i<=range)
	{	int j=1, k=range;
		while(j<=i)
			{cout<<"   ";j++;}
		while(k>=i)
			{cout<<" X ";k--;}
		i++;
		cout<<endl;
	}
	return 0;
}