#include<iostream>
using namespace std;

int main(){
	char grade;
	cout<<"Enter Student Grade : ";cin>>grade;
	switch (grade){
	case 'A':case 'a':cout <<"  Excellent  !";break;
	case 'B':case 'b':cout << "Outstanding !";break;
	case 'C':case 'c':cout << "    Good    !";break;
	case 'D':case 'd':cout << "Can do better";break;
	case 'E':case 'e':cout << " Just Passed ";break;
	case 'F':case 'f':cout << " You Failed  ";break;
	
	default:
		cout << "Invalid Grade.";
	}
	return 0;
}