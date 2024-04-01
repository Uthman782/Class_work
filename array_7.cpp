#include<iostream>
using namespace std;

int main(){
	int range;cout<<"Enter Range for your values: ";cin>>range; 
	int arry[range], i;//we get range of array from the user.
	for(i=0; i<range; i++){  // getting values from the user.
	 	cout<<"arry["<<i<<"]: ";cin>>arry[i]; }
	cout<<"You Entered Array: {";
	for(i=0;i<range;i++){//Printing what user entered.   
		cout<<arry[i];
		if(!(i==range-1))cout<<", ";
	}
	int ass[range];
	for(i=0;i<range;i++){
		for(int j=1;j<range;j++){
			if(arry[j-1]<arry[j]){
			 int t = arry[j-1];
			 arry[j-1] = arry[j-1];
				
			}                 
		}
	}
		cout<<"\nAscending Array: {";
	for(i=0;i<range;i++){//Printing what user entered.   
		cout<<ass[i];
		if(!(i==range-1))cout<<", ";
	}cout<<"}";
	return 0;
}