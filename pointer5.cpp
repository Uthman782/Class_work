#include<iostream>
using namespace std;

inline void swap(int &pa, int &pb){
	int t=pa;
	pa = pb;
	pb = t;
}
int main(){
	int a=10, b=20;
	cout<<"A is: "<<a<<endl;
	cout<<"B is: "<<b<<endl;
	swap(a, b);
	cout<<"After swap.......: "<<endl;
	cout<<"Now A is: "<<a<<endl;
	cout<<"Now B is: "<<b<<endl;
	return 0;
}