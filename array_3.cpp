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
		min=(arry[i]<min)?arry[i]:min;
		max=(arry[i]>max)?arry[i]:max;
	}
	int count_min=0, count_max=0;
	for(i=0;i<5;i++){
		if(min==arry[i])count_min++;
		if(max==arry[i])count_max++;
	}
	cout<<"----------------------------\n";
	cout<<"Minimum: "<<min<<"  count min: "<<count_min;
	cout<<"\nMaximum: "<<max<<"  count max: "<<count_max;
	return 0;
}