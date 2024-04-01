#include<iostream>
using namespace std;
 // SUBTRACTION
int main(){
	int A[2][2],B[2][2]; // Declarations
	cout<<"For A:"<<endl;
	for(int i=0; i<2; i++) // Outer Loop, for Rows
		for(int j=0; j<2; j++){ // Inner Loop, for Columns
			cout<<"A["<<i<<"]["<<j<<"]: "; 
			cin>>A[i][j]; // Getting values for A[2][2]
		}
		cout<<"For B:"<<endl;
	for(int i=0; i<2; i++)
		for(int j=0; j<2; j++){
			cout<<"B["<<i<<"]["<<j<<"]: ";
			cin>>B[i][j]; // Getting values for B[2][2]
		}


	int sub[2][2]; // A[2][2] - B[2][2]
	for(int i=0; i<2; i++)
		for(int j=0; j<2; j++){
			sub[i][j]=A[i][j] - B[i][j]; // i, j will be same for all.
		}	


	// OUTPUT..............
	cout<<"OUTPUT: "<<endl;  
	for(int i=0; i<2; i++){
		cout<<" |";
		for(int j=0; j<2; j++){
			cout<<A[i][j];
			if(j!=1)cout<<"  ";
		}
		cout<<"| - |";
		for(int j=0; j<2; j++){
			cout<<B[i][j];
			if(j!=1)cout<<"  ";

		}
		cout<<"|"<<endl;
	}


	cout<<"SUB: "<<endl;
	for(int i=0; i<2; i++){
		cout<<"|";
		for(int j=0; j<2; j++){
			cout<<sub[i][j];
			if(j!=1)cout<<", ";
		}
		cout<<"|"<<endl;
	}


	return 0; 
}


