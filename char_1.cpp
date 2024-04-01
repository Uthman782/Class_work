#include<iostream>
using namespace std;

int main(){
	char ch=64;
	while(ch<122)
	{
		if(ch==91)cout<<endl;
		ch++;
		if(ch>90 and ch<97)continue;
		cout<<ch<<" ";
	}
	return 0;
}