#include<iostream>
using namespace std;

int power(int n,int p){
	int result=1;
	for(int i=1;i<=p; i++)result*=n;
	return result;
}
int main(){
//	int a=2, b=4;
//	cout<<(2*2+(1<5)+2%2);
	int a = power(3,3);
	cout<<a;
	return 0;
}