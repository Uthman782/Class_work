#include<iostream> 
using namespace std;
			
int main(){
	int n, r, sum = 0;
	cout<<"Enter a Number: ";cin>>n;
	cout<<"Revers: ";
	for (int i = 0; n>=1; i++){
		r = n%10;
		sum = sum+r;
		cout<<r;
		n = n/10;
	}
	cout<<endl<<"Sum is: "<<sum;
	return 0;
}