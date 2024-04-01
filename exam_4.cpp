#include<iostream>
using namespace std;
 //Question II--> part (c)
int main(){
	int n;
	cout<<"Enter a Number: ";
	cin>>n;
	if(n>0 and n<=10){
		for(int i=1;i<=10;i++)
			cout<<i<<" X "<<n<<" = "<<i*n<<endl;
	}
	else cout<<"Enter number between 0 and 10 or equal 10.";
	
	return 0;
}