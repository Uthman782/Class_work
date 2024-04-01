#include<iostream>
using namespace std;
 // Question III--> part (c)
int main(){
	int c=1; 
	for(int i=1; c<=10;i++){
		for(int j=1;j<=i;j++){
		cout<<c<< " ";
		c++;
		}
		cout<<endl;
	}
	
	return 0;
}