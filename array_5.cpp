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
	//Squaring..
	int square[range], cube[range];
	for (i=0;i<range;i++){
		square[i]=arry[i]*arry[i];
		cube[i]=arry[i]*arry[i]*arry[i];
	}
	
	cout<<"}\n Square of  Array: {";
	for(i=0;i<range;i++){ 
		cout<<square[i];
		if(!(i==range-1))cout<<", ";
	}
	cout<<"}\n  Cube  of  Array: {";
		for(i=0;i<range;i++){   
		cout<<cube[i];
		if(!(i==range-1))cout<<", ";
	}cout<<"}";
	return 0;
}