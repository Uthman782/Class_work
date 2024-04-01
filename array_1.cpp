#include<iostream>
using namespace std;

int main(){
	int arry[5], i;//arry is static Array
	for(i=0; i<5;i++){//Get Input from user
		cout<<"arry["<<i<<"]: ";
		cin>>arry[i];
	}
	cout<<"\tOutput\n";
	for(i=0;i<5;i++) //Printing Data
		cout<<"arry["<<i<<"]= "<<arry[i]<<endl;
	return 0;
}