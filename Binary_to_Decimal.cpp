#include<iostream>
using namespace std;

int main(){
	int n, r;
	cout<<"Enter a Number: ";cin>>n;
	int decimal=0, power=1, orignal_n=n;
	for(int i=1;n>0;i++){ //Now Converting.
		r=n%10;         //Binary to Decimal. 
		n=n/10; 
		if(r>1){ //Binary is only 1-0 so it is not greater then 1.
			cout<<"Not Binary";//if r is greater then 1.
			exit(0);	      //then it is not a binary number. 
		}
		if(i>1)power*=2;
		decimal+=r*power; //Main Formula
	}
	cout<<"Binary: "<<orignal_n;
	cout<<"\nDecimal: "<<decimal;
	return 0;
}
          