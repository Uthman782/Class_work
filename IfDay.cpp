#include<iostream>
using namespace std;

int main(){
	char day;
	cout<<"Enter Day(m,t,w,h,f,a,s): ";
	cin>>day;
	 
	if (day == 'm' || day == 'M')
		cout<<"Monday";
	else if (day == 't' || day == 'T')
		cout<<"Tuesday";
	else if (day == 'w' || day == 'W')
		cout<<"Wednesday";
	else if (day == 'h' || day == 'H')
		cout<<"Thursday";
	else if (day == 'f' || day == 'F')
		cout<<"Friday";
	else if (day == 'a' || day == 'A')
		cout<<"Saturday";
	else if (day == 's' || day == 'S')
		cout<<"Sunday";
	else
	cout<<"Invalid Input";
		
	return 0;
}