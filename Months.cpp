#include<iostream>
using namespace std;

int main(){
	int i;
	cout<<"Enter Number for Months (1,2,3,....12): ";
	cin>>i;
	
	if(i == 1)
		cout<<"January";
	else if(i == 2)
		cout<<"February";
	else if(i == 3)
		cout<<"March";
	else if(i == 4)
		cout<<"April";
	else if(i == 5)
		cout<<"May";
	else if(i == 6)
		cout<<"June";
	else if(i == 7)
		cout<<"July";
	else if(i == 8)
		cout<<"August";
	else if(i == 9)
		cout<<"September";
	else if(i == 10)
		cout<<"October";
	else if(i == 11)
		cout<<"November";
	else if(i == 12)
		cout<<"December";
	else
		cout<<"Invalid Input";

	return 0;
}