#include <iostream>
using namespace std;

int main(){
//	const int a=1;
//	int a=1;
//	const int *p = &a;
//	a = 4;
//	cout<<"For a: "<<p<<endl;
//	cout<<"For a: "<<*p<<endl;
//	int b = 2;
//	cout<<"For b: "<<p<<endl;
//	cout<<"For b: "<<*p;
	
//	int *p;
//	p = new int [5];
//	for(int i=0;i<5;i++){
//		p[i]= 100+i;
//		p[i]= 100+i;
//	for(int i=0; i<5; i++)cout<<p[i]<<endl;
//	delete []p;
//	for(int i=0; i<5; i++)cout<<p[i]<<endl;

	int a = 10;
	int &b = a;
	cout<<b<<endl;
	b = 40;
	cout<<b<<endl;
	
	return 0;
}

//int main () {
//   int  var1;
//   char var2[10];
//
//   cout << "Address of var1 variable: ";
//   cout << &var1 << endl;
//
//   cout << "Address of var2 variable: ";
//   cout << &var2 << endl;
//
//   return 0;
//}

