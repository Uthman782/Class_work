#include<iostream>
using namespace std;

int main(){
	int arry[5], i;
	for(i=0; i<5;i++){
		cout<<"arry["<<i<<"]: ";
		cin>>arry[i];
	}
	int s;
	string found;
	cout<<"Enter Number to Search: ";cin>>s;
	for(i=0;i<5;i++){
		if(s==arry[i]){
			found = "Yes";
			break;
		}else found="No";
	}
	int counter=0;
	if(found=="Yes"){
	for(i=0;i<5;i++){
		if(s==arry[i])counter++;
	}
	}
	cout<<found<<endl;
	cout<<"How Much: "<<counter<<"Times";
	return 0;
}