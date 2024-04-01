#include <iostream>
using namespace std;
// ADDITION
int main(){
	int A[2][2], B[2][2]; // Declarations
	cout << "For A:" << endl;
	for (int i=0; i<2; i++) // Outer Loop, for Rows
		for (int j=0; j<2; j++){ // Inner Loop, for Columns
			cout <<"A["<< i <<"]["<< j <<"]: ";
			cin >> A[i][j]; // Getting values for A[2][2]
		}
	cout <<"For B:"<< endl;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++){
			cout <<"B["<< i <<"]["<< j <<"]: ";
			cin >> B[i][j]; // Getting values for B[2][2]
		}

	int sum[2][2]; // A[2][2] + B[2][2]
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++){
			sum[i][j] = A[i][j] + B[i][j]; // i, j will be same for all.
		}


	// OUTPUT.....A[2][2]....B[2][2].....
	cout << "OUTPUT: " << endl;
	for (int i = 0; i < 2; i++){
		cout << " |";
		for (int j = 0; j < 2; j++){
			cout << A[i][j];
			if (j != 1)cout << "  ";
		}
		cout << "|  |";
		for (int j = 0; j < 2; j++){
			cout << B[i][j];
			if (j != 1)cout << "  ";
		}
		cout << "|" << endl;
	}

	cout <<"SUM: "<< endl;
	for (int i = 0; i < 2; i++){
		cout << "|";
		for (int j=0; j<2; j++){
			cout << sum[i][j];
			if (j!=1)
				cout << "  ";
		}
		cout << "|" << endl;
	}


	return 0;
}



// ..............OUTPUT..............
// For A:
// A[0][0]: 1
// A[0][1]: 2
// A[1][0]: 2
// A[1][1]: 2
// A[2][0]: 3
// A[2][1]: 1
// For B:
// B[0][0]: 1 
// B[0][1]: 2 
// B[0][2]: 2
// B[1][1]: 1
// B[1][1]: 2
// B[1][2]: 2
// OUTPUT:
//  |1 2| |1 2 2|
//  |2 2| |1 2 2|
//  |3 1| 
//  SUM:
//  |3 6 6|
//  |4 8 8|
//  |4 8 8|

