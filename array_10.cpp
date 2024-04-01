#include<iostream>
using namespace std;

int main(){
	int range;cout<<"Range: ";cin>>range; //Getting Range
	int A[range], B[range];cout<<"For A !"<<endl;
	for(int i=0;i<range; i++){
		cout<<"A["<<i<<"]: ";cin>>A[i];
	}cout<<"For B !"<<endl;
	for(int i=0;i<range; i++){
		cout<<"B["<<i<<"]: ";cin>>B[i];
	}cout<<"  A:= { ";
	for(int i=0;i<range; i++)cout<<A[i]<<" ";
	cout<<"}"<<endl;
	cout<<"  B:= { ";
	for(int i=0;i<range; i++)cout<<B[i]<<" ";
	cout<<"}"<<endl;
	cout<<"AUB:= { "; //A{1,2,3,4,5} B{4,5,6,7,8} AUB{1,2,3,4,5,6,7,8}
	for(int i=0;i<range; i++){
		for(int j=0;j<range; j++){
			if(A[i]==B[j]){
				cout<<A[i];
				break;
			}
			else if(A[i]!=B[j]){
				cout<<A[i];
				break;
			}
		}
	}
	return 0;
}