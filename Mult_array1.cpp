#include <iostream>
using namespace std;

int main(){
	int arry[3][4];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++){
			cout << "arry[" << i << "][" << j << "]: ";
			cin >> arry[i][j];
		}
	// OUTPUT...
	cout << "OUTPUT: " << endl;
	for (int i = 0; i < 3; i++){
		cout << "  |";
		for (int j = 0; j < 4; j++){
			cout << arry[i][j];
			if (j != 3)
				cout << "  ";
		}
		cout << "|" << endl;
	}
	return 0;
}




