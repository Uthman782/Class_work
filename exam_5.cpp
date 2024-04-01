#include<iostream>
using namespace std;
 // Question I--> part (a)
int main(){
	int a=10, b, c;
	b=a++; // here a increase but after assigning. Therefore a==10-->b=10.
	c=a; // now a is increased by 1 so a==11.
	cout<<a<<"  "<<b<<"  "<<c;
	return 0;
}