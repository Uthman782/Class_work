#include<iostream>
using namespace std;

int main(){
	int a = 25;
	float b = 30.56; 
	auto *p;
	p = &a;
	cout<<*(p);
//	p = &b;
//	cout<<*p;
	
	return 0;
}