#include<iostream>
using namespace std;

char func(char a){
	char c = a+32;
	return c;
}
int main(){
	char ch;
	cout<<"Enter A-Z: ";
	cin>>ch;
	if(ch<65 or ch>91)cout<<"Not Capital.. ";
	char a = func(ch);
	cout<<a;
	return 0;	
}