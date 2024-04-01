#include<iostream> 
using namespace std;

int main(){
	int n=459, r1, r2, r3;
	r1 = n%10; //9
	n = n/10; //45
	r2 = n%10; //5
	n = n/10; //4
	r3 = n%10; //4
	int sum = r1 + r2 + r3;
	cout<<"Sum is: "<<sum<<endl;
	int rev = r1*100 + (r2*10) +r3;
	cout<<"Revers: "<<rev;
}}      