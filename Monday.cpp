#include<iostream>
using namespace std;

int main(){
	char op;
	cout<<"Enter an Operator: ";cin>>op;
	
	switch(op){
		case 's':case 'S':
			cout<<"Sunday";break;
		case 'm':case 'M':
			cout<<"Monday";break;
		case 't':case 'T':
			cout<<"Tuesday";break;
		case 'w':case 'W':
			cout<<"Wednesday";break;
		case 'h':case 'H':
			cout<<"thursday";break;
		case 'f':case 'F':
			cout<<"Friday";break;
		case 'a':case 'A':
			cout<<"Saturday";break;
		default:
			cout<<"You Enter Worng Operator";
	}
	return 0;
}