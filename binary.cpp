#include <iostream>
 using namespace std;
 void disp_binary(unsigned u);
 int main(){
 unsigned u;
 cout << "Enter a number between 0 and 255: ";
 cin >> u;
 cout << "Here's the number in binary: ";
 disp_binary(u);
 cout << "Here's the complement of the number: ";
 disp_binary(~u);
 return 0;
 }
 // Display the bits within a byte.
 void disp_binary(unsigned u)
 {
	int t;
 	for(t=128; t>0; t = t/2)
 		if(u & t) cout << "1 ";
 		else cout << "0 ";
 	cout << "\n";
 }