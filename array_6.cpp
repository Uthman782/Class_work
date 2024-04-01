#include<iostream>
using namespace std;

int main(){
	int range;cout<<"Enter Range for your values: ";cin>>range; 
	int arry[range], i;//we get range of array from the user.
	for(i=0; i<range; i++){  // getting values from the user.
	 	cout<<"arry["<<i<<"]: ";cin>>arry[i]; }
	cout<<"You Entered: {";
	for(i=0;i<range;i++){//Printing what user entered.   
		cout<<arry[i];
		if(!(i==range-1))cout<<",";
	}
	
	for(i=0;i<range-1;i++) //{3,4,2,5,1} -->0
		for(int j=1;j<range;j++) //{3,2,4,1,5} -->1
			if(arry[j-1]>arry[j]){ //{2,3,1,4,5} -->2
				int t=arry[j-1]; //{2,1,3,4,5} -->3
				arry[j-1]=arry[j]; //{1,2,3,4,5} -->4
				arry[j]=t;
			}
			
	cout<<"} \nAscending Form: {";
	for(i=0;i<range;i++){ 
	cout<<arry[i]; 				//{1,2,3,4,5}
	if(!(i==range-1))cout<<",";	
	}
	cout<<"} \nDescending Form: {";
	for(i=range-1;i>=0;i--){
		cout<<arry[i]; 				//{1,2,3,4,5}
		if(!(i==0))cout<<",";
	}cout<<"}";	
	return 0;
}