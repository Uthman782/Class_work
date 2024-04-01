#include<iostream>
using namespace std;

int main(){
	int arry[5], i;
	for(i=0; i<5;i++){
		cout<<"arry["<<i<<"]: ";
		cin>>arry[i];
	}
	int min=arry[1],max=arry[1];
	for(i=0;i<5;i++){
		min=(arry[i]<min)?arry[i]:min;//For Minimum
		max=(arry[i]>max)?arry[i]:max;//For Maximum
	} 
	cout<<"--------------\n";
	cout<<"Minimum: "<<min<<endl;
	cout<<"Maximum: "<<max;
	return 0;
}