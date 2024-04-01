#include<iostream>
using namespace std;
 //Question II --> part (a)
int main(){
	int i=3;
	int I=i/-2;//i=3-->3/-2--> -1.5 but it is int(int I) so (-1).
	int k=i%-2;//i=3--> -1*(-2)=+2 and 3-2=+1.
	cout<<I<<"  "<<k;// -1  1
	
	return 0;
}