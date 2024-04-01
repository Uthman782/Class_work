#include<iostream>
using namespace std;

int main(){
	int A[3][2],B[2][3];
	cout<<"For A:"<<endl;
	for(int i=0; i<3; i++) 
		for(int j=0; j<2; j++){ 
			cout<<"A["<<i<<"]["<<j<<"]: "; 
			cin>>A[i][j]; 
		}
		cout<<"For B:"<<endl;
	for(int i=0; i<2; i++)
		for(int j=0; j<3; j++){
			cout<<"B["<<i<<"]["<<j<<"]: ";
			cin>>B[i][j]; 
		}

	// Multiplying....
	int mul[3][3];
	 for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            mul[i][j] = 0;
            for (int k = 0; k < 2; ++k)
                mul[i][j] += A[i][k] * B[k][j];
        }
    }


	// OUTPUT..............
	cout<<"OUTPUT: "<<endl;  
	for(int i=0; i<3; i++){
		cout<<" |";
		for(int j=0; j<2; j++){
			cout<<A[i][j];
			if(j!=1)cout<<"  ";
		}
		cout<<"|";
		if(i!=2)cout<<" x |";
		for(int j=0; j<3; j++){
		if(i==2)break;
			cout<<B[i][j];
			if(j!=2)cout<<"  ";

		}
		if(i!=2)cout<<"|"<<endl;
		else cout<<endl;
	}

	cout<<"Mul: "<<endl;
	for(int i=0; i<3; i++){
		cout<<"|";
		for(int j=0; j<3; j++){
			cout<<mul[i][j];
			if(j!=2)cout<<" ";
		}
		cout<<"|"<<endl;
	}


	return 0; 
}


