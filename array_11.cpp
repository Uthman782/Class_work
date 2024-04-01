#include <iostream>
using namespace std;

int main(){
	string name[5] = {"izhar", "hammad", "maaz", "wajahat", "yaseen"};
	string search;
	cout << "Enter Name: ";
	cin >> search;
	string found = "No";
	for (int i = 0; i < 5; i++)
		if (search == name[i]){
			found = "Yes";
			break;
		}
	cout << found;
	return 0;
}
