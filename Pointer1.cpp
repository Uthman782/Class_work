#include<iostream>
using namespace std;

int main(){
	int a = 90;
	cout<<"Value of 'a': "<<a<<endl;
	int *p; // declare a pointer name p.
	p = &a; //store address of 'a' in 'p'. 
	cout<<"Address of 'a': "<<p<<endl; // now 'p' have address of 'a'.
	cout<<"values on address 'p': "<<*p<<endl; // value in 'p' address as same to 'a'.
//	if I change value of 'a' on address ( p ) it will change value in (a).
	 cout<<"before value in 'a': "<<a<<endl;
	 *p = 40; // let change value on 'p' adress it'll change value in 'a'. 
	 cout<<"after value in 'a': "<<a; // now 'a' was change so 'a' have '40'.
	return 0;
}
