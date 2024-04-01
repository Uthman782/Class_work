#include<iostream>
using namespace std;

int main(){
	for(char ch=65;ch<123;ch++)
	{
		if(ch==91)cout<<endl;
		if(ch>90 and ch<97)continue;
		cout<<ch<<"  ";
	}
	return 0;
}