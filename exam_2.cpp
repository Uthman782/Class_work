#include<iostream>
using namespace std;
 // Question  I --> part (c)
int main(){
	char c;
	cout<<"Enter small Alphabet (a - z): ";
	cin>>c;
//	int b=c; //convet char into int
//	char cap=b-32; //b is int and 32 is also int it retrun int.
	char cap=(int)c-32; // (int)c convert c into int. 
	cout<<"Capital: "<<cap;
	return 0;
}