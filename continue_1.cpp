#include<iostream>
using namespace std;

int main(){
	for(int i=1; i<=100; i++){
		if(i%2)continue;
		cout<<i<<"  ";
		if(!(i%10))cout<<endl;
	}
	return 0;
}