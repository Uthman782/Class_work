#include<iostream>
using namespace std;

//void sum(int, int);
	//	or
//void sum(int = 10, int = 5);
	//	or
void sum(int a= 10, int b= 5);

int main(){
	cout<<"Default arguments are (10, 5)"<<endl;
	cout<<"No Arguments: ";
	sum();
	cout<<"One Arguments(1): ";
	sum(1);
	cout<<"Both Arguments(11,12): ";
	sum(11,12);
	return 0;
}
//void sum(int d=10, int c=5){
		// or
void sum(int d, int c){
	cout<<d+c<<endl;
}